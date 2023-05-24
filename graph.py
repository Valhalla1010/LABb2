import numpy as np
import matplotlib.pyplot as plt

# Läs in data från filen
data = np.loadtxt('cmake-build-debug/QS_part/Quick_Sort_PN_Stigandeeee.txt', skiprows=2)

# Extrahera kolumnerna för N, T och Stdev
N = data[:, 0]
T = data[:, 1]
STd_avvikelse = data[:, 2]

# Plotta grafen
plt.clf()
plt.errorbar(N, T, yerr=STd_avvikelse, color='r', linestyle='none', marker='x', label='Konstant input')
plt.plot(N, T, '-', color='b', label='O(N log N)')

plt.ylabel('T [ms]')
plt.xlabel('N elements')
plt.title('QSMedianOf3 -- Konst series')
plt.legend()
plt.show()


