#define N 50
#define M 50

int matrix_a[N][M] = {
    {6978, 8367, 1149, 2956, 6935, 2897, 2826, 9637, 668, 3738, 2779, 4876, 2860, 6029, 7164, 430, 6136, 6876, 6216, 5311, 6620, 7542, 5102, 5480, 1410, 8488, 6852, 357, 5396, 4135, 6155, 6699, 9711, 9573, 9757, 5428, 2146, 8524, 2850, 5721, 5924, 4799, 3923, 5189, 7892, 8228, 6591, 2688, 1204, 8579},
    {9847, 3687, 6030, 5592, 8917, 5842, 1871, 318, 8498, 1463, 7532, 3139, 968, 3127, 4437, 3130, 4766, 2628, 1730, 6025, 2234, 4541, 5209, 6249, 3067, 2799, 3754, 7424, 1762, 3244, 8606, 6834, 2245, 517, 383, 3675, 1111, 9423, 9424, 9081, 6087, 9439, 7816, 3616, 3763, 8480, 5936, 2090, 7477, 4857},
    {1851, 3178, 3097, 1983, 975, 5009, 9295, 9604, 4013, 9391, 2782, 6495, 5886, 9600, 3894, 3924, 5690, 5056, 2405, 7657, 805, 6792, 9816, 3561, 2318, 1602, 3525, 168, 9384, 5476, 3279, 5372, 9204, 4106, 168, 1338, 779, 7423, 3580, 773, 6638, 7348, 6822, 8627, 6339, 9481, 6205, 4937, 1630, 3367},
    {3509, 9122, 1889, 1233, 231, 7716, 731, 9733, 1635, 109, 5165, 3941, 7145, 3128, 624, 6924, 253, 4770, 5292, 7608, 711, 5093, 3091, 5345, 5888, 5401, 7747, 8772, 4570, 17, 1096, 5676, 2040, 9841, 9151, 5557, 5475, 7654, 1826, 5993, 1155, 5116, 7086, 6496, 2137, 9552, 6156, 932, 8376, 8230},
    {4571, 3739, 788, 1314, 742, 3030, 5051, 3501, 8384, 6495, 2859, 6456, 3976, 6265, 862, 6230, 4632, 8181, 7712, 7088, 6801, 3052, 4613, 339, 6547, 6220, 5582, 1123, 2765, 8260, 8233, 5409, 7161, 7339, 3084, 9676, 4542, 4438, 9279, 4854, 4312, 4286, 6451, 5802, 5499, 2840, 7606, 9299, 4541, 9637},
    {7414, 211, 2038, 164, 2128, 6197, 8793, 9036, 8594, 4457, 7954, 527, 4600, 324, 9165, 3116, 5623, 1236, 678, 8032, 2768, 1949, 7413, 6803, 8525, 6451, 7611, 2036, 3154, 1350, 5022, 5248, 494, 4655, 586, 6681, 9617, 1266, 2316, 9388, 8383, 7317, 9166, 8203, 4414, 989, 3072, 6430, 5422, 7441},
    {6474, 9361, 9101, 3120, 1397, 8608, 4696, 5773, 4332, 2532, 2583, 884, 6107, 5571, 4749, 7535, 3483, 17, 224, 6703, 8346, 7752, 7585, 3253, 6554, 7013, 5655, 1142, 1560, 9641, 6075, 235, 6774, 4844, 9738, 1321, 6855, 7475, 1651, 2707, 2863, 44, 318, 2982, 601, 889, 2500, 2583, 7725, 8974},
    {5323, 1896, 8422, 9320, 2801, 980, 4448, 6883, 8560, 9345, 8837, 2186, 7708, 3313, 4898, 9246, 1636, 8749, 9567, 6480, 2797, 4381, 4835, 4712, 7479, 8906, 642, 356, 2211, 3781, 5010, 33, 3224, 3053, 9553, 5157, 9695, 2297, 3504, 4275, 7416, 2, 622, 2758, 6728, 2645, 2268, 8381, 4161, 8281},
    {3669, 8766, 5677, 596, 773, 6515, 753, 8949, 3224, 6910, 4596, 1688, 4934, 8706, 4205, 5511, 3126, 291, 8041, 4334, 8459, 3354, 7363, 6937, 4008, 6889, 6104, 1817, 1347, 2835, 3859, 2479, 5325, 2138, 7, 8531, 3671, 7676, 537, 4323, 4810, 5850, 6138, 8301, 892, 5739, 2185, 8086, 986, 3578},
    {3046, 9458, 6695, 452, 4449, 8127, 2336, 2874, 4347, 8661, 5013, 9988, 2615, 3762, 1000, 945, 2151, 3464, 6590, 2428, 1393, 6647, 883, 1257, 3398, 466, 4315, 8311, 1231, 3234, 2114, 8979, 7283, 9461, 9061, 1262, 8794, 6886, 3780, 1256, 8059, 8290, 1231, 2006, 5023, 7394, 5768, 4104, 1518, 3274},
    {8156, 7383, 8794, 9329, 2410, 8805, 1361, 1896, 3694, 1403, 5492, 8557, 7872, 3365, 8928, 6319, 3876, 383, 4321, 4298, 2999, 9901, 197, 3302, 2049, 1662, 9852, 7856, 5582, 3464, 4210, 7943, 3483, 3458, 740, 884, 858, 800, 8931, 7647, 5157, 7576, 5878, 5435, 3002, 5967, 5032, 8000, 4938, 2668},
    {5564, 8470, 7038, 3826, 6074, 6004, 781, 8941, 9009, 4469, 5978, 1925, 7048, 5875, 7732, 365, 8445, 6068, 806, 506, 7718, 812, 87, 7859, 6832, 3809, 9114, 169, 2008, 849, 937, 9386, 9102, 7566, 5347, 3138, 932, 7913, 6405, 2817, 4450, 8748, 8709, 8779, 1311, 6807, 3543, 4331, 7997, 8902},
    {6320, 2758, 8692, 973, 9145, 7388, 6766, 9860, 7755, 2542, 4616, 4016, 1892, 7153, 6595, 3231, 797, 2868, 5714, 7287, 3982, 4803, 3513, 2573, 6003, 9388, 814, 1479, 4454, 2593, 1036, 6665, 866, 7671, 6076, 1436, 2335, 3508, 9955, 6170, 3898, 9278, 5312, 3768, 5738, 7164, 4886, 4957, 6064, 2330},
    {289, 4900, 9059, 4822, 7190, 7674, 2899, 2151, 4059, 679, 8630, 6570, 8022, 5618, 6857, 2576, 4417, 9768, 2233, 5192, 8283, 3213, 6169, 2095, 7633, 6375, 6968, 6128, 7174, 5426, 6045, 7527, 1827, 287, 938, 6184, 1048, 3104, 1111, 146, 4324, 1356, 2168, 8983, 5581, 6075, 8760, 2085, 3598, 7348},
    {553, 106, 9280, 1519, 1111, 1837, 4537, 9428, 7027, 2397, 9170, 4231, 8423, 4867, 1390, 6554, 2098, 6246, 2571, 4470, 5780, 5467, 5850, 3372, 9657, 5483, 590, 3107, 8732, 7383, 6540, 4766, 3298, 2717, 5127, 5901, 9844, 7574, 8966, 4920, 3064, 3799, 2819, 9016, 4879, 4374, 3037, 2758, 6502, 4905},
    {9011, 5237, 1229, 898, 3754, 5167, 8923, 6821, 5870, 5994, 4937, 4869, 5858, 7010, 3099, 6690, 1776, 3667, 4736, 3197, 3086, 8010, 7327, 6453, 7018, 6648, 9165, 2631, 5494, 84, 610, 3406, 5050, 1740, 4340, 978, 9650, 2137, 168, 9229, 7386, 1843, 3744, 4275, 3168, 4182, 7482, 8866, 1010, 5020},
    {1893, 9126, 7687, 7575, 2554, 1391, 9030, 9193, 6761, 8363, 4177, 58, 6482, 3246, 5880, 5544, 614, 8371, 8635, 2506, 5451, 7480, 6185, 3605, 6491, 9226, 7214, 1382, 909, 3890, 2891, 7265, 454, 4508, 4283, 6629, 3613, 564, 779, 2743, 5191, 641, 7602, 8803, 6648, 8002, 8477, 2098, 3604, 7074},
    {9969, 322, 7809, 9731, 7758, 4913, 7144, 8056, 3926, 5958, 5902, 9166, 5577, 2364, 7867, 9770, 3139, 4121, 3681, 8590, 9027, 7089, 5406, 7266, 8355, 2607, 3534, 1338, 3035, 995, 3137, 1441, 3559, 9926, 2115, 1380, 8369, 7310, 9965, 9457, 4149, 8926, 187, 9497, 315, 6827, 3958, 2430, 6531, 7459},
    {7222, 9785, 3659, 5715, 4372, 8293, 9938, 2554, 3833, 6049, 8892, 3950, 3845, 9422, 5086, 1723, 2070, 600, 1304, 5702, 541, 547, 3916, 3306, 7854, 8246, 4933, 2298, 4927, 1856, 4951, 5023, 1437, 2748, 4640, 1119, 5147, 2010, 1116, 3161, 1021, 2066, 6305, 1081, 2434, 3947, 2866, 755, 7294, 9745},
    {4655, 3466, 8879, 8862, 3494, 1667, 9779, 6818, 799, 3666, 3538, 6967, 9284, 3408, 7575, 4863, 367, 8381, 2858, 5591, 5615, 864, 7341, 4180, 8283, 7722, 8161, 926, 8761, 374, 188, 4915, 2619, 6151, 3240, 1827, 5350, 6950, 3075, 7181, 5327, 2232, 5942, 7283, 193, 3740, 5595, 7286, 4652, 3689},
    {1528, 3096, 908, 5920, 1175, 4394, 4354, 6339, 2485, 7701, 7629, 5761, 6446, 7788, 6481, 5340, 9694, 1237, 4833, 7287, 2960, 8859, 1009, 312, 5170, 8874, 5805, 6022, 7679, 6051, 1637, 4871, 6178, 8283, 5967, 7016, 9954, 8942, 3774, 807, 9970, 1742, 666, 7079, 7923, 5207, 872, 7241, 8888, 8058},
    {3796, 6483, 3650, 7415, 3733, 2718, 605, 2179, 8573, 5967, 8739, 8758, 3954, 6658, 4225, 6750, 2491, 4473, 1359, 9914, 6459, 1497, 3442, 4686, 9285, 4862, 880, 3984, 5969, 377, 8059, 916, 3061, 9392, 3626, 2215, 8288, 9852, 3738, 96, 7892, 3748, 4927, 9956, 1075, 3791, 162, 2385, 6446, 345},
    {7433, 2860, 2622, 153, 3599, 5733, 1556, 6612, 9915, 81, 9603, 2826, 4930, 9337, 3338, 7798, 8592, 9193, 9719, 7572, 5945, 1158, 5487, 6687, 688, 2742, 6990, 6405, 3480, 9646, 1775, 3938, 4452, 7931, 8828, 7487, 1509, 4976, 2765, 8748, 1133, 6446, 9759, 6393, 4944, 6407, 3480, 9787, 6178, 2101},
    {9570, 2481, 934, 777, 1822, 9855, 68, 7427, 5502, 9415, 6208, 6218, 8869, 3970, 73, 6403, 4712, 3424, 2690, 5696, 2779, 3816, 4553, 2671, 1413, 9555, 4258, 3660, 1777, 4524, 6403, 7843, 2512, 3111, 8170, 2416, 3411, 146, 3825, 722, 1254, 2858, 6048, 1341, 497, 2377, 9493, 717, 4189, 9908},
    {5337, 6011, 1258, 3062, 5324, 319, 4059, 4792, 2396, 634, 4699, 6143, 5932, 8898, 7038, 1535, 184, 3824, 52, 2874, 7020, 4656, 9072, 3888, 8282, 712, 6586, 6226, 65, 5341, 6632, 8531, 771, 4607, 5591, 2550, 7024, 40, 9356, 267, 1151, 3321, 4183, 6605, 1021, 4052, 5172, 7170, 1288, 3116},
    {5607, 5840, 5574, 7782, 2510, 8917, 9025, 4100, 4487, 3806, 5353, 5862, 6791, 9169, 7510, 1307, 653, 4802, 9378, 3858, 630, 4603, 7715, 9213, 5758, 4059, 7226, 4337, 2006, 4797, 2142, 5335, 9602, 1724, 2719, 3569, 4707, 9354, 3226, 974, 4287, 2797, 4008, 8232, 3342, 5528, 9131, 981, 7350, 4062},
    {4636, 6119, 8506, 8116, 6741, 3417, 3177, 8891, 6050, 3198, 6501, 1226, 2291, 715, 1261, 2411, 5111, 1590, 353, 1698, 7850, 8120, 7679, 4562, 6835, 9470, 9188, 8966, 2900, 3821, 809, 6408, 4759, 5886, 6758, 8556, 9048, 1984, 6388, 6805, 4304, 6556, 3321, 7672, 7906, 3084, 7722, 7336, 192, 3943},
    {3507, 7907, 5524, 5632, 2787, 1484, 1414, 3285, 9913, 3659, 8800, 9235, 8937, 8058, 6142, 8780, 7202, 8553, 9279, 7340, 9324, 1860, 3214, 4527, 8804, 3647, 7631, 6829, 9450, 8398, 3237, 7942, 2918, 5867, 7030, 6965, 2028, 6146, 6672, 1071, 5209, 9430, 302, 5757, 3847, 8046, 386, 225, 8834, 8202},
    {9296, 1272, 6694, 5621, 8088, 5192, 4112, 2486, 3583, 517, 1451, 7216, 7253, 5138, 9883, 4653, 1210, 9558, 3340, 7620, 8220, 7427, 135, 9449, 7210, 3850, 1230, 496, 4857, 920, 1676, 6622, 1495, 7140, 7708, 8965, 273, 962, 9006, 6828, 6726, 1227, 8093, 9142, 3706, 393, 1985, 970, 9544, 1017},
    {9219, 9529, 9075, 2602, 7252, 6999, 6457, 989, 6298, 202, 6542, 4440, 311, 1061, 3518, 3456, 4761, 4931, 9827, 970, 6960, 111, 8896, 4317, 1228, 4252, 7816, 5351, 4100, 4332, 1191, 3058, 3475, 8841, 1872, 3083, 482, 4951, 4292, 7274, 6488, 2344, 2920, 8781, 457, 7340, 3602, 302, 4737, 6729},
    {5305, 8142, 9356, 1515, 5062, 1869, 9369, 8556, 8259, 9307, 9503, 3066, 3395, 6533, 8862, 3794, 9424, 6303, 7731, 8777, 5662, 7045, 1209, 7318, 1992, 886, 5973, 4599, 22, 201, 743, 5752, 8633, 5296, 2576, 5506, 1069, 3266, 855, 4448, 9910, 692, 1987, 7953, 9124, 3595, 4851, 6384, 4105, 6197},
    {2103, 1268, 6957, 8152, 4172, 3360, 4283, 6315, 2045, 4629, 5125, 1035, 3922, 9810, 1801, 7409, 4060, 9778, 2264, 1530, 6879, 6868, 5293, 7430, 153, 8505, 6633, 5252, 9661, 7635, 7418, 8068, 70, 8845, 2126, 5120, 5264, 6517, 1521, 4244, 8708, 6950, 4991, 4950, 9965, 5168, 3979, 8859, 7432, 9085},
    {4430, 7618, 6191, 2952, 784, 5736, 2647, 7534, 7589, 1344, 1419, 1286, 6098, 5796, 552, 2142, 5437, 1025, 245, 5690, 3874, 3222, 6813, 6862, 9590, 8305, 1068, 9108, 2438, 3397, 6135, 7969, 1649, 5902, 5672, 9272, 5719, 2418, 9600, 3283, 3835, 9252, 7528, 4770, 9613, 2954, 6409, 22, 2619, 2654},
    {3865, 4188, 7122, 2113, 2235, 8613, 3333, 3675, 6222, 7178, 9314, 4285, 3757, 6483, 229, 1018, 7412, 28, 8161, 7605, 3887, 2815, 432, 4432, 1285, 1543, 4443, 2672, 133, 927, 4641, 7159, 9852, 2937, 5678, 1110, 3110, 9488, 6765, 9250, 4583, 4998, 6618, 7224, 3174, 6168, 9149, 2570, 6863, 9715},
    {2398, 1161, 1100, 1752, 3622, 2264, 8144, 7228, 1282, 567, 1657, 4973, 6411, 2509, 3047, 4870, 5751, 7303, 9381, 1065, 2758, 7557, 589, 4717, 1939, 2676, 8369, 753, 5189, 757, 1836, 6383, 4359, 788, 5442, 9444, 1532, 8155, 8135, 341, 8154, 21, 7016, 7654, 385, 9495, 3091, 6159, 5913, 3891},
    {8798, 2256, 6685, 8801, 3281, 1244, 8510, 660, 8388, 6785, 9426, 7345, 2156, 2668, 448, 5774, 2595, 2279, 1143, 450, 2924, 8561, 5661, 9662, 3885, 5524, 9077, 8530, 9074, 5653, 4107, 7823, 2159, 2332, 3883, 4076, 7177, 4591, 1856, 9589, 3402, 5401, 7036, 3710, 1479, 1982, 7140, 8637, 6256, 8951},
    {6452, 6945, 5662, 9169, 8491, 3256, 2925, 721, 8938, 6068, 144, 2352, 557, 2933, 4660, 3303, 1261, 7444, 4485, 4439, 4425, 1218, 5407, 7308, 2721, 1112, 4128, 2851, 7155, 7849, 369, 1982, 7749, 8552, 8740, 1560, 3388, 6864, 7419, 9490, 250, 5707, 3119, 5413, 691, 4792, 4411, 9040, 8901, 744},
    {6933, 3508, 7783, 1818, 894, 8044, 963, 5519, 8658, 706, 544, 3111, 4973, 9817, 6093, 4217, 5566, 6048, 8094, 4902, 8227, 6481, 9399, 9622, 5635, 108, 4880, 3836, 8071, 6429, 6916, 9891, 4720, 5830, 2859, 4504, 6379, 6626, 5687, 6537, 9278, 203, 2565, 360, 4042, 7502, 3784, 9791, 6034, 7668},
    {9054, 9978, 9506, 3913, 9202, 2865, 3444, 2635, 3457, 2994, 2486, 1159, 4239, 1124, 2920, 9164, 7313, 109, 8448, 4714, 821, 2479, 6997, 271, 810, 7007, 6463, 2268, 5466, 972, 8533, 3062, 8332, 1718, 3542, 779, 362, 4977, 1073, 515, 1214, 7881, 2037, 4728, 9890, 4943, 4891, 3322, 3877, 6353},
    {1471, 4483, 6740, 5541, 7409, 6046, 9927, 9002, 4074, 8521, 2132, 5089, 7818, 244, 3450, 5463, 78, 3103, 5755, 981, 7402, 8137, 952, 1995, 7218, 1693, 330, 2723, 1543, 6193, 2265, 6263, 4304, 1863, 7064, 9573, 9869, 8144, 7550, 4901, 3358, 6821, 9726, 4538, 8861, 2612, 5090, 6171, 943, 5803},
    {876, 8822, 9436, 4268, 6159, 4457, 2113, 5907, 819, 3105, 7526, 3508, 942, 8360, 7711, 2593, 5889, 2034, 7434, 8662, 8173, 5812, 746, 8474, 2162, 3947, 3646, 8654, 7131, 5526, 1174, 6132, 8587, 8739, 818, 5964, 3221, 9274, 9845, 1881, 5676, 1693, 9632, 2963, 3710, 7956, 9309, 8297, 8603, 267},
    {7138, 4761, 709, 675, 8132, 2559, 1086, 2184, 7300, 7480, 6338, 2244, 2225, 9893, 279, 6599, 9093, 478, 1745, 354, 6411, 2739, 6219, 4566, 2773, 879, 6535, 3812, 2718, 5937, 6567, 3115, 6598, 1812, 7448, 921, 4133, 410, 1286, 3870, 3371, 2223, 6926, 5015, 6091, 8990, 6190, 1020, 4752, 7480},
    {7699, 5112, 4764, 2183, 496, 9162, 3503, 123, 122, 6422, 8793, 5221, 6571, 4121, 5422, 9872, 6352, 1303, 6856, 6219, 2240, 7570, 9468, 8874, 5533, 2153, 3410, 5659, 9964, 7653, 1378, 1208, 5211, 1548, 8699, 5769, 5850, 3033, 3734, 4906, 3553, 9943, 782, 9646, 5379, 5185, 7526, 7189, 1606, 7506},
    {5559, 1243, 2964, 6725, 2532, 2314, 5039, 5751, 4208, 2916, 5398, 5398, 7195, 8363, 4026, 5457, 5494, 992, 3677, 5153, 5697, 4996, 2426, 2906, 2494, 8923, 6624, 3518, 3257, 2618, 452, 3218, 7476, 4401, 4628, 3712, 9723, 3762, 9453, 5132, 5191, 2540, 4725, 1984, 642, 7968, 5379, 7038, 4450, 4006},
    {47, 8457, 6423, 4620, 5237, 6876, 6509, 4945, 1825, 1918, 7880, 9910, 3774, 2464, 7441, 3651, 537, 3607, 677, 1890, 680, 5395, 8180, 1125, 7266, 5173, 5631, 1107, 8381, 3978, 6390, 9659, 6087, 6589, 7842, 5379, 3594, 2061, 7464, 4481, 8931, 2578, 1088, 316, 3606, 1641, 8272, 3273, 916, 3824},
    {4690, 9982, 2679, 6409, 7931, 7574, 6894, 4125, 188, 153, 5084, 140, 9443, 417, 5977, 1819, 6146, 1654, 6546, 1669, 1654, 7689, 2098, 9232, 2605, 2429, 7528, 7396, 8685, 32, 8404, 8031, 2, 6077, 449, 7375, 9692, 7002, 9581, 425, 8321, 9873, 8125, 9170, 1432, 4174, 1051, 736, 4592, 3951},
    {7262, 3494, 2740, 1445, 5784, 857, 1073, 9951, 701, 8710, 8322, 8318, 4143, 3128, 2218, 6477, 4754, 9135, 3169, 2517, 8799, 3055, 454, 1772, 8478, 5989, 2420, 5226, 3359, 1647, 8134, 7758, 4446, 3085, 174, 2918, 5326, 1547, 1681, 9636, 6503, 9660, 9929, 1836, 9590, 7919, 7958, 6963, 5272, 6368},
    {1999, 7121, 7961, 5806, 4689, 6151, 3768, 6465, 7047, 9688, 4487, 712, 9634, 1198, 4072, 3055, 5906, 6098, 8842, 9858, 48, 1072, 8170, 3863, 4893, 8204, 3860, 1822, 6588, 1102, 9639, 3081, 4331, 5761, 7432, 9405, 7978, 7646, 7068, 7715, 7762, 1338, 4833, 1465, 5233, 4783, 6722, 3119, 3392, 6927},
    {850, 1006, 3159, 7678, 6510, 8538, 7661, 5891, 5738, 6617, 6274, 2193, 5613, 399, 4191, 8882, 8, 6570, 4889, 9743, 5990, 8373, 4507, 2495, 4323, 7565, 3213, 9942, 5069, 532, 4017, 7002, 5652, 3541, 522, 995, 619, 6513, 9982, 1720, 822, 1251, 9041, 9211, 4236, 6071, 1860, 4979, 5699, 7107},
    {858, 9082, 7468, 2952, 7306, 4457, 306, 8513, 9603, 6159, 170, 4794, 4357, 5891, 995, 2626, 7450, 9679, 6, 5070, 7300, 8141, 7936, 9656, 729, 4081, 747, 2926, 1350, 1510, 4517, 6900, 8547, 3235, 9208, 8566, 4181, 6817, 9711, 2359, 4989, 1336, 8016, 7191, 5781, 766, 9187, 8615, 595, 8988},
};

int matrix_b[N][M] = {
    {2549, 2895, 2674, 5853, 5079, 4705, 8868, 2023, 4131, 6285, 6439, 9229, 7737, 9078, 9990, 3052, 3294, 2434, 1510, 2601, 7286, 4701, 180, 1337, 8729, 1353, 1238, 8896, 830, 6846, 6043, 6061, 8548, 4359, 9484, 9349, 4264, 9273, 7124, 7809, 935, 3722, 8799, 201, 6943, 6798, 9647, 5024, 408, 955},
    {6341, 3012, 703, 7750, 5597, 6381, 1072, 7758, 1776, 5849, 1356, 8054, 4560, 8252, 2459, 1209, 5860, 2106, 2856, 7092, 1765, 4039, 2630, 9057, 6106, 3122, 255, 7518, 604, 6132, 1326, 4564, 1560, 6451, 2875, 1922, 3365, 3827, 4108, 399, 492, 377, 7399, 1911, 15, 7415, 1734, 1229, 1350, 6763},
    {7572, 8864, 7348, 3282, 1925, 4371, 9905, 9514, 8992, 1657, 5818, 3050, 3753, 3547, 8308, 5678, 1697, 9518, 7231, 3202, 9184, 7923, 8670, 2742, 5213, 9371, 6173, 1285, 9401, 7730, 7844, 6290, 7948, 4935, 1310, 7037, 2059, 5932, 5099, 7444, 9423, 4045, 1937, 8223, 2863, 5396, 9360, 2949, 196, 5189},
    {8722, 8350, 9887, 4211, 5658, 1648, 4820, 3379, 3724, 4445, 3906, 9996, 581, 3275, 9883, 4985, 3391, 2088, 318, 967, 657, 7408, 1010, 4936, 5091, 4023, 1925, 8612, 9667, 9633, 6701, 4505, 654, 9721, 9243, 3298, 6004, 8078, 547, 4450, 2394, 985, 8842, 3174, 1482, 4409, 126, 4626, 1857, 4454},
    {7736, 3701, 1160, 3456, 1144, 3694, 2728, 558, 626, 6429, 9241, 6641, 6102, 6497, 1963, 8113, 5052, 6141, 6295, 620, 3852, 7326, 5343, 4500, 7966, 4427, 8117, 6571, 8685, 4880, 6720, 9401, 7508, 686, 1488, 1240, 8323, 4621, 2800, 2337, 2753, 4322, 4181, 7791, 6663, 2568, 8365, 7858, 3860, 9674},
    {6200, 9741, 2183, 4539, 6185, 8451, 9989, 6158, 16, 6090, 5673, 2765, 6976, 6260, 5516, 8885, 5903, 2589, 9337, 9418, 353, 810, 6992, 862, 9970, 6389, 1959, 9678, 2478, 2472, 927, 6061, 6332, 4913, 2128, 3893, 8550, 2821, 4373, 8899, 3336, 9984, 7144, 6931, 4655, 3967, 3461, 2409, 5027, 8163},
    {4354, 9634, 3110, 4795, 5191, 8176, 1685, 6523, 6877, 1153, 5558, 7111, 1497, 1513, 3191, 29, 8082, 6799, 4819, 1377, 7990, 1238, 415, 4854, 3916, 5173, 7477, 1194, 4505, 8200, 8733, 7943, 594, 709, 9037, 8125, 4340, 3052, 9826, 4749, 6615, 2270, 4908, 2119, 8873, 3459, 1251, 771, 2493, 3608},
    {9915, 4908, 3799, 5360, 8568, 6421, 6382, 1976, 8506, 7053, 764, 1335, 8264, 210, 6287, 4990, 8253, 3158, 6911, 8379, 1330, 3363, 9841, 1703, 2136, 2076, 9267, 1265, 1866, 7342, 1642, 7056, 4931, 4649, 1434, 3671, 530, 3177, 5075, 5068, 3635, 6461, 6904, 9486, 5550, 9624, 5510, 3437, 9595, 8634},
    {3816, 143, 8393, 1067, 4551, 7029, 3276, 3789, 7565, 1651, 101, 305, 4304, 8755, 4530, 1278, 2395, 2690, 7444, 607, 6241, 2882, 1124, 2398, 6295, 1802, 1673, 4710, 8550, 6226, 7203, 7777, 7979, 6736, 574, 119, 4977, 9034, 6021, 7491, 1831, 5063, 4101, 5831, 9587, 8434, 2262, 2737, 3027, 2014},
    {3166, 3118, 1484, 3297, 6285, 6172, 6431, 7970, 3709, 5886, 2207, 2787, 528, 1060, 1347, 9858, 1558, 5358, 1477, 6897, 5794, 2228, 3357, 1811, 3996, 3063, 8366, 7021, 7724, 5151, 7506, 6286, 4334, 8455, 3002, 9922, 7475, 3722, 8697, 4248, 9580, 1597, 3159, 5894, 9402, 6304, 8755, 2321, 6936, 5249},
    {5182, 1435, 6375, 3488, 7041, 467, 1397, 3621, 9737, 8141, 6910, 2396, 6089, 5104, 8194, 9313, 8227, 2384, 2255, 2376, 6309, 4971, 7610, 1317, 8105, 2835, 6605, 7031, 9001, 2068, 8838, 6921, 8479, 4369, 7878, 9084, 2290, 8244, 2644, 3596, 5368, 8467, 715, 7368, 3982, 3261, 3519, 2587, 2189, 5434},
    {6403, 4252, 8570, 4943, 8406, 4665, 7672, 8449, 4979, 8101, 1604, 8132, 4245, 3471, 377, 2851, 9772, 8174, 8653, 2257, 8006, 3535, 6404, 6766, 4152, 6695, 8930, 3580, 8247, 2311, 8657, 8105, 4967, 5824, 2098, 7028, 7706, 8483, 5250, 8195, 6466, 7859, 6066, 4922, 7544, 5639, 8745, 7332, 9078, 33},
    {7587, 7630, 326, 5753, 7712, 1327, 5188, 2277, 3327, 8269, 781, 3421, 355, 5939, 259, 6958, 9383, 9489, 7051, 5283, 1891, 1643, 2146, 4683, 7468, 9045, 9562, 4125, 9569, 2051, 2386, 375, 3595, 7828, 7807, 4463, 6070, 3127, 6376, 6390, 3464, 4795, 4251, 5645, 1687, 6349, 3055, 8544, 6586, 9998},
    {5832, 6793, 3269, 2820, 432, 6190, 995, 9624, 2608, 1767, 9314, 1069, 4837, 5370, 2334, 8518, 2531, 2770, 1581, 1794, 1149, 2259, 5319, 3739, 3501, 4923, 9971, 1535, 1955, 2581, 4974, 5157, 2760, 3302, 3514, 2704, 9430, 3157, 6844, 5378, 5104, 9511, 8995, 9882, 4300, 7942, 6264, 6777, 7376, 6066},
    {1525, 1903, 3732, 4757, 4659, 7271, 3138, 1188, 7825, 9433, 2587, 7749, 3176, 576, 954, 7791, 1762, 2487, 7457, 2420, 3729, 4580, 2823, 5350, 9540, 5475, 1212, 7327, 7747, 1289, 895, 234, 5124, 4501, 9963, 7398, 5665, 3261, 4097, 1838, 2448, 2114, 534, 4397, 3694, 6035, 1115, 9947, 8988, 5170},
    {4070, 1697, 897, 4573, 6271, 4980, 73, 5080, 2885, 7941, 1512, 3869, 243, 5217, 4614, 7236, 5657, 1121, 241, 7897, 8455, 7933, 6321, 1837, 8840, 4838, 3753, 5682, 8873, 2281, 339, 1224, 8447, 8900, 4390, 1551, 2377, 7723, 8847, 606, 5689, 7094, 501, 2491, 6376, 5562, 4286, 9061, 5481, 7772},
    {7461, 9066, 7860, 4885, 9051, 7097, 7285, 3235, 9668, 9861, 6848, 5460, 4910, 6570, 5185, 6612, 6366, 5185, 8817, 7283, 8263, 5310, 7624, 6035, 4269, 9685, 372, 4954, 6017, 2023, 2215, 6549, 663, 9156, 4505, 3698, 9873, 4665, 3902, 1139, 9297, 1991, 2320, 1301, 8466, 2240, 8309, 5611, 3224, 4802},
    {3908, 6847, 209, 7629, 4914, 8633, 2294, 230, 3918, 5652, 1204, 3062, 9382, 1188, 6141, 3037, 7192, 181, 4097, 7862, 5631, 9572, 3468, 2537, 7682, 6119, 2431, 4749, 555, 3473, 4629, 3096, 9095, 5571, 140, 4905, 2630, 3694, 6980, 6186, 7123, 6250, 4188, 4069, 9638, 4142, 6754, 6085, 3216, 1744},
    {7791, 5476, 3828, 9222, 1752, 1820, 4063, 4778, 5418, 5697, 2740, 9320, 3426, 1693, 6115, 6347, 6436, 677, 991, 7421, 1657, 4319, 12, 321, 647, 6836, 2206, 9230, 615, 8623, 7062, 3338, 6791, 6463, 6616, 3227, 5827, 342, 9345, 3972, 9383, 9728, 9666, 9923, 2584, 9713, 6218, 9494, 3416, 3493},
    {2543, 8302, 6967, 6912, 2009, 2654, 8041, 5684, 7691, 691, 6855, 6270, 3453, 2432, 4423, 6898, 8994, 8038, 193, 8624, 2183, 9945, 3658, 4282, 3937, 4325, 1726, 3864, 9061, 2045, 8571, 9504, 492, 9876, 5194, 5590, 9776, 303, 3865, 3837, 2259, 4944, 1459, 9162, 7806, 3058, 6500, 291, 6454, 380},
    {5017, 1726, 558, 7281, 9316, 8574, 1981, 5559, 5028, 6663, 8630, 5560, 8633, 4825, 2369, 5788, 3876, 4881, 5893, 5206, 9629, 3135, 10000, 1400, 6116, 4212, 486, 2579, 1974, 6907, 5310, 4430, 6558, 6321, 7822, 363, 8008, 1763, 8541, 5739, 3928, 5753, 6073, 9882, 2085, 1443, 2185, 2930, 7886, 3896},
    {7127, 5861, 4106, 5846, 7137, 6, 7885, 5476, 6793, 4707, 8496, 2623, 4726, 2125, 1154, 4670, 2982, 6118, 4505, 2437, 3546, 2704, 4552, 1740, 9887, 6572, 1651, 8117, 1098, 5339, 2614, 6882, 6890, 5386, 1314, 9387, 6616, 2642, 6621, 5214, 9882, 3945, 7331, 4260, 2303, 678, 5958, 3214, 6911, 6945},
    {9126, 9435, 8422, 9612, 9160, 4253, 2962, 6926, 259, 8720, 7135, 180, 9661, 4994, 4696, 1146, 8270, 5914, 5360, 4436, 349, 6265, 3238, 9955, 726, 8760, 4423, 7, 5035, 7005, 3291, 6255, 5083, 4602, 7692, 7665, 429, 4055, 7118, 3513, 9034, 4759, 7562, 3891, 6118, 5031, 5398, 7319, 9805, 3625},
    {3660, 8240, 5218, 7754, 9006, 9235, 9890, 7848, 1462, 2752, 8985, 3338, 1770, 1213, 8927, 5422, 8831, 3027, 8659, 5439, 8398, 8407, 5018, 4795, 4344, 410, 8031, 4062, 755, 1374, 9167, 8619, 6807, 8397, 8777, 5833, 4860, 4517, 6845, 9059, 3208, 7219, 9567, 1038, 2906, 2705, 1909, 6421, 9320, 6884},
    {5003, 7974, 9658, 2442, 8153, 393, 7320, 2598, 8891, 9910, 5101, 6572, 290, 2075, 4160, 409, 8025, 8080, 3575, 6888, 8373, 3087, 4892, 5282, 8374, 8282, 4158, 482, 548, 6759, 7866, 6572, 8252, 6276, 1524, 3553, 444, 8292, 5026, 5468, 1469, 6872, 1305, 6424, 6261, 2910, 6701, 2719, 6836, 6778},
    {8510, 7311, 9673, 639, 1879, 4449, 2559, 5324, 1377, 2067, 1281, 4466, 7161, 9284, 2531, 5059, 9096, 2696, 4323, 6170, 2143, 5900, 4643, 4916, 2970, 6360, 8309, 8582, 713, 5818, 278, 6986, 3245, 845, 9366, 119, 336, 2561, 7241, 3701, 7161, 811, 3588, 3643, 3608, 6599, 6687, 9610, 9617, 201},
    {172, 3195, 2689, 1837, 5935, 2842, 8300, 4916, 5747, 5243, 4369, 9592, 1778, 3690, 2359, 3080, 6914, 9388, 4733, 2235, 5816, 3761, 1432, 8706, 9938, 2884, 2141, 1714, 4380, 1664, 1997, 1971, 3721, 1216, 1638, 5471, 4877, 4272, 611, 9838, 9628, 4855, 4252, 2038, 1026, 4424, 7500, 4636, 455, 2376},
    {9300, 2249, 3428, 6836, 5848, 4587, 8450, 9947, 5064, 4035, 4741, 5463, 1203, 9811, 5949, 6453, 6383, 2129, 1572, 201, 8341, 5597, 6931, 2194, 3880, 4434, 4685, 7212, 6347, 247, 1912, 6599, 1751, 808, 4043, 3444, 2146, 1876, 936, 3773, 296, 6138, 807, 3570, 3075, 8503, 6867, 5983, 3828, 8291},
    {7798, 2956, 7126, 1723, 5251, 9227, 6406, 9581, 5065, 716, 3318, 9476, 671, 8800, 8601, 5072, 5176, 9045, 9210, 362, 2615, 9062, 7656, 2583, 1792, 7211, 5219, 1644, 4849, 6740, 3885, 2550, 9838, 7713, 8714, 2564, 365, 3051, 267, 7093, 1634, 9871, 3693, 2741, 8310, 1045, 7643, 3958, 1541, 9231},
    {6095, 4285, 3419, 831, 5671, 8447, 8578, 4155, 6184, 3515, 9079, 9390, 4505, 553, 7720, 9002, 1577, 2977, 3324, 1383, 1730, 2649, 4499, 5280, 51, 7878, 9705, 2202, 3318, 2958, 2536, 7555, 7949, 8162, 4337, 2970, 5726, 9076, 2421, 3609, 9501, 4304, 1456, 9766, 5610, 8514, 1033, 1313, 6598, 2957},
    {5370, 9704, 1543, 4022, 9486, 5490, 1819, 4543, 9001, 4399, 3382, 5459, 5331, 9747, 6244, 5566, 4980, 5412, 6751, 3190, 3415, 1575, 1176, 4860, 6777, 1138, 4874, 7276, 9718, 4836, 2429, 278, 8373, 283, 1475, 7711, 4854, 2826, 1754, 2557, 3295, 1391, 6641, 4723, 2041, 8670, 2662, 8229, 989, 2509},
    {1038, 55, 2208, 8272, 6917, 8842, 7225, 4730, 5250, 2926, 1714, 4463, 3247, 1761, 258, 9401, 7192, 3538, 5039, 9711, 5341, 4870, 5135, 9134, 1756, 378, 6359, 7844, 235, 6543, 6577, 8138, 8101, 9518, 9837, 7799, 4131, 4094, 4971, 2354, 1639, 195, 275, 3953, 6698, 7352, 9141, 7042, 3516, 9436},
    {2139, 4881, 2606, 1887, 4905, 4302, 3322, 7243, 5237, 4104, 4393, 1561, 3296, 3478, 1513, 6515, 2851, 6273, 9424, 3031, 2398, 3575, 8179, 5667, 4716, 8054, 3929, 5345, 4567, 6738, 4439, 2435, 3702, 2744, 3217, 3806, 9458, 4036, 8197, 107, 2176, 8373, 4125, 2383, 5243, 3827, 1428, 9673, 7671, 4606},
    {893, 9204, 5791, 690, 5645, 9603, 1660, 2979, 4396, 7179, 7184, 2022, 9969, 92, 461, 1229, 9460, 8055, 6375, 5588, 8595, 2542, 9517, 2390, 3584, 6253, 3277, 5730, 9967, 3588, 6869, 8132, 7952, 7929, 3985, 2696, 1411, 9185, 3460, 7543, 3845, 4161, 8421, 3070, 2062, 1518, 4176, 7962, 4890, 9156},
    {5759, 7804, 9791, 4447, 4913, 2996, 2136, 2230, 3398, 5294, 4659, 3446, 9163, 3665, 7297, 9277, 1023, 2927, 420, 6767, 2066, 442, 3271, 1108, 4322, 1183, 5916, 518, 6035, 1834, 9707, 5442, 895, 4246, 8445, 9350, 3479, 7415, 8814, 6120, 7628, 4818, 1930, 7677, 8574, 351, 3325, 1712, 511, 1884},
    {6026, 5818, 7376, 2604, 4458, 2027, 2377, 8332, 1236, 1326, 1870, 792, 7467, 5764, 1164, 3285, 1585, 3044, 5037, 1501, 7074, 7931, 3075, 6460, 4974, 6822, 5813, 8389, 2820, 3961, 4503, 7524, 9050, 1399, 8918, 6284, 9129, 1792, 6828, 9217, 8741, 4996, 3, 4184, 239, 3157, 8092, 3532, 3950, 3931},
    {4180, 8857, 780, 8216, 5252, 2112, 9822, 4896, 3194, 5350, 9927, 878, 1889, 7863, 5691, 5057, 4711, 5882, 914, 5801, 4233, 2860, 1371, 6582, 9538, 4349, 6789, 3835, 5986, 868, 9842, 4250, 6189, 6393, 580, 5970, 6458, 5217, 9288, 8744, 82, 4641, 4669, 8251, 172, 5034, 1394, 916, 5766, 7388},
    {2205, 3860, 4890, 2842, 3578, 9353, 7381, 3233, 8820, 5407, 3305, 5355, 6075, 8631, 6282, 7240, 5727, 3500, 6527, 1144, 629, 6467, 7193, 2762, 3885, 7707, 4960, 1886, 2035, 1930, 9238, 3154, 268, 1931, 9345, 9602, 6274, 686, 2118, 2182, 1614, 3191, 9302, 6664, 4648, 6004, 4114, 5201, 2161, 3879},
    {6557, 4181, 9547, 5352, 8312, 4018, 125, 5555, 4987, 3466, 7162, 9872, 1329, 2009, 8555, 7697, 9367, 645, 3095, 6929, 6233, 4035, 4505, 8487, 8158, 1829, 4124, 2947, 3124, 1644, 841, 3141, 3920, 5472, 2485, 1124, 6049, 7778, 1099, 2747, 919, 927, 2627, 3197, 8827, 7428, 6883, 6226, 705, 520},
    {6800, 8258, 3152, 9752, 5002, 3506, 3426, 7313, 8305, 8154, 8052, 9502, 6148, 4792, 128, 6394, 3305, 6127, 3390, 706, 7433, 663, 1346, 9613, 7540, 9485, 9698, 3229, 1065, 5402, 6034, 4472, 9149, 5793, 5532, 9985, 3412, 173, 1325, 759, 255, 807, 5581, 8502, 1110, 4189, 2049, 6480, 1962, 2791},
    {5122, 6809, 9773, 9642, 9470, 2665, 6995, 6029, 6561, 5572, 8432, 4812, 8420, 732, 9914, 4225, 2648, 6272, 718, 6221, 2665, 6263, 5059, 8586, 3172, 9288, 269, 1138, 1741, 1772, 1743, 9393, 3381, 9514, 7928, 636, 7322, 2956, 8245, 6702, 8402, 5723, 2791, 61, 5082, 8889, 4179, 270, 296, 8008},
    {8221, 1519, 4598, 6978, 5071, 610, 2372, 4845, 9545, 2397, 6736, 505, 5917, 4825, 6910, 7139, 4179, 9728, 2187, 4322, 6737, 7080, 7615, 622, 6828, 4488, 4303, 828, 5767, 9135, 1188, 509, 7634, 6846, 6942, 3428, 2449, 9137, 8782, 3574, 2777, 1875, 3054, 6354, 1058, 7847, 8113, 3962, 4943, 8269},
    {4677, 8265, 8554, 3541, 3512, 5647, 1527, 6070, 2927, 6103, 4264, 2580, 5008, 7178, 52, 8186, 3494, 8205, 203, 2086, 1563, 2705, 1605, 373, 3902, 4866, 6776, 3244, 337, 1732, 2219, 7820, 9071, 462, 6825, 5691, 279, 7827, 9873, 9117, 1026, 8290, 7778, 9583, 4658, 1206, 287, 5291, 7752, 1333},
    {4651, 2962, 8122, 9515, 1691, 8120, 2612, 6868, 6998, 4855, 468, 1235, 7788, 6462, 4982, 115, 7521, 913, 2920, 9987, 5410, 30, 7219, 1114, 6051, 2223, 4731, 3623, 9039, 8056, 4230, 3, 302, 3743, 7694, 4183, 4539, 3827, 7462, 2324, 7259, 6382, 708, 7210, 6440, 117, 6139, 5122, 7386, 6013},
    {5296, 885, 759, 7942, 6003, 8084, 1164, 4306, 7172, 7968, 3132, 6983, 4554, 2062, 23, 9721, 4621, 1504, 8020, 6303, 9711, 9986, 1554, 5448, 2158, 8688, 4202, 4559, 478, 3398, 1046, 2170, 6427, 3749, 9471, 1171, 788, 2758, 1799, 7417, 4323, 5596, 4478, 9982, 9479, 8158, 9201, 8894, 353, 2776},
    {9044, 1707, 1453, 1227, 5372, 3558, 1099, 4569, 2012, 3234, 4281, 8365, 8070, 1811, 6251, 948, 8531, 4180, 3469, 9586, 401, 8533, 5000, 9778, 355, 8500, 7105, 819, 474, 6300, 3566, 1074, 9901, 8430, 7011, 2209, 3862, 5261, 6546, 2224, 752, 4238, 291, 9383, 388, 193, 9281, 8752, 9223, 8903},
    {7900, 9996, 4556, 3326, 2998, 705, 2623, 7958, 2702, 6382, 5725, 3394, 543, 539, 5679, 2351, 3255, 8043, 306, 1616, 3268, 3405, 9966, 1507, 7757, 2109, 813, 4838, 3999, 7473, 7520, 5959, 1224, 4937, 1720, 1185, 5223, 7228, 8654, 4208, 2974, 2594, 8169, 1494, 5511, 4548, 1492, 3805, 7210, 596},
    {1644, 267, 2720, 4758, 8933, 6838, 7984, 5692, 3215, 1024, 2502, 1755, 8781, 3060, 7003, 4919, 1787, 8216, 5383, 4935, 8290, 6221, 1203, 8777, 1801, 9494, 8075, 999, 9511, 2844, 416, 7863, 2003, 9412, 5402, 8052, 6117, 2668, 5239, 4440, 3948, 1341, 7885, 8876, 9100, 6611, 8537, 8069, 6902, 4275},
    {8177, 2346, 9301, 4316, 2809, 1578, 5392, 5129, 7960, 7022, 8426, 6574, 8105, 3852, 8473, 3662, 6804, 3645, 7372, 644, 9420, 9639, 1491, 8087, 1474, 2861, 8740, 3213, 427, 4555, 5190, 8251, 574, 8098, 6207, 7180, 7313, 6789, 4288, 7309, 6334, 5660, 5954, 4622, 2287, 4334, 3743, 2174, 830, 4965},
    {1715, 9014, 1666, 6886, 7028, 8066, 714, 1139, 5300, 2102, 1287, 7766, 5370, 2048, 6561, 9587, 1860, 6, 4402, 5829, 1084, 7495, 322, 1167, 4392, 9559, 6054, 3410, 3615, 7621, 5173, 4802, 2160, 6908, 8049, 694, 2982, 3632, 6820, 5276, 4417, 5944, 8509, 1892, 7514, 8650, 9423, 6069, 961, 4495},
};