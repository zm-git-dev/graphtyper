#pragma once

// Python code:
//   import math
//   def fact(n) : return 1 if n <= 1 else n*fact(n-1)
//   print 'std::array<double, 999> static const LOG10_TABLE = {'; print ',\n'.join('  %.15f'%(math.log10(fact(n)),) for
//   n in range(999)); print '}\n'

std::array<double, 999> static const LOG10_TABLE = {
  {0.000000000000000,    0.000000000000000,    0.301029995663981,    0.778151250383644,    1.380211241711606,
   2.079181246047625,    2.857332496431269,    3.702430536445525,    4.605520523437469,    5.559763032876794,
   6.559763032876794,    7.601155718035018,    8.680336964082644,    9.794280316389480,    10.940408352067719,
   12.116499611123400,   13.320619593779325,   14.551068515157599,   15.806341020260904,   17.085094621213734,
   18.386124616877716,   19.708343911611635,   21.050766592433842,   22.412494428451435,   23.792705670163041,
   25.190645678835079,   26.605619026805897,   28.036982790964885,   29.484140822307101,   30.946538820206055,
   32.423660074925721,   33.915021768759992,   35.420171747079898,   36.938685686957783,   38.470164604000040,
   40.014232648350315,   41.570535149117603,   43.138736873184598,   44.718520469801412,   46.309585076827908,
   47.911645068155870,   49.524428924875608,   51.147678215273508,   52.781146670853097,   54.424599347339282,
   56.077811861114625,   57.740569692796193,   59.412667550731911,   61.093908788107498,   62.784104868136012,
   64.483074872472031,   66.190645048569976,   67.906648392204772,   69.630924261805561,   71.363318021628530,
   73.103680711122777,   74.851868738128971,   76.607743593801459,   78.371171587364401,   80.142023599006549,
   81.920174849390193,   83.705504684400964,   85.497896373899209,   87.297236923352798,   89.103416897336686,
   90.916330253979538,   92.735874189521411,   94.561948992222227,   96.394457904928473,   98.233306995665728,
   100.078405035679978,  101.929663384399063,  103.786995880830332,  105.650318740950780,  107.519550460681756,
   109.394611724073457,  111.275425316354259,  113.161916041526737,  115.054010644217215,  116.951637735507646,
   118.854727722499590,  120.763212741378240,  122.677026593761951,  124.596104686138034,  126.520383972199909,
   128.449802897914196,  130.384301349157766,  132.323820601776390,  134.268303273926563,  136.217693280571467,
   138.171935790010792,  140.130977182331890,  142.094765009677445,  144.063247958231386,  146.036375811831078,
   148.014099417119922,  149.996370650159491,  151.983142384425747,  153.974368460118228,  155.970003654715782,
   157.970003654715782,  159.974325028498441,  161.982925200260354,  163.995762424965534,  166.012795764264297,
   168.033985063334256,  170.059290928599012,  172.088674706284223,  174.122098461771174,  176.159524959711803,
   178.200917644870032,  180.246240623656689,  182.295458646326864,  184.348537089810293,  186.405441941146762,
   188.466139781500374,  190.530597770727297,  192.598783632473442,  194.670665639779571,  196.746212601172118,
   198.825393847219743,  200.908179217536173,  202.994539048210925,  205.084444159650332,  207.177865844812573,
   209.274775857820629,  211.375146402938185,  213.478950123894151,  215.586160093542020,  217.696749803841271,
   219.810693156148091,  221.927964451803859,  224.048538383009713,  226.172390023976789,  228.299494822341615,
   230.429828590836621,  232.563367499206805,  234.700088066363207,  236.839967152764444,  238.982981953018538,
   241.129109988696769,  243.278329101352170,  245.430617445735209,  247.585953483200285,  249.744315975295535,
   251.905683977530515,  254.070036833314930,  256.237354168063121,  258.407615883458107,  260.580802151870330,
   262.756893410926068,  264.935870358219233,  267.117713946163974,  269.302405376981596,  271.489926097818056,
   273.680257795988325,  275.873382394342798,  278.069282046752051,  280.267939133706477,  282.469336258026942,
   284.673456240682810,  286.880282116714682,  289.089797131257342,  291.301984735661279,  293.516828583708957,
   295.734312527922896,  297.954420615962931,  300.177137087110509,  302.402446368836422,  304.630333073450061,
   306.860781994828301,  309.093778105220451,  311.329306552128003,  313.567352655256798,  315.807901903539403,
   318.050939952225690,  320.296452620039815,  322.544425886401655,  324.794845888710540,  327.047698919690447,
   329.302971424793782,  331.560649999662928,  333.820721387648007,  336.083172477378412,  338.347990300388005,
   340.615162028791019,  342.884674973008941,  345.156516579545382,  347.430674428809084,  349.707136232982350,
   351.985889833935175,  354.266923201182863,  356.550224429886441,  358.835781738894184,  361.123583468824449,
   363.413618080186950,  365.705874151543412,  368.000340377705015,  370.297005567966551,  372.595858644376278,
   374.896888640040288,  377.200084697460738,  379.505436066907350,  381.812932104820561,  384.122562272246455,
   386.434316133302275,  388.748183353671379,  391.064153699128326,  393.382217034091070,  395.702363320202096,
   398.024582614936037,  400.348865070233728,  402.675200931162522,  405.003580534601213,  407.333994307950434,
   409.666432767866013,  412.000886519016944,  414.337346252865473,  416.675802746470083,  419.016246861310208,
   421.358669542132418,  423.703061815817534,  426.049414790268202,  428.397719653316358,  430.747967671650485,
   433.100150189761848,  435.454258628909258,  437.810284486102375,  440.168219333102797,  442.528054815442715,
   444.889782651460337,  447.253394631352478,  449.618882616243354,  451.986238537269401,  454.355454394679555,
   456.726522256951284,  459.099434259921395,  461.474182605931446,  463.850759562987946,  466.229157463936133,
   468.609368705647739,  470.991385748222569,  473.375201114203037,  475.760807387801322,  478.148197214140055,
   480.537363298504602,  482.928298405607961,  485.320995358867606,  487.715447039693856,  490.111646386789573,
   492.509586395461611,  494.909260116942676,  497.310660657724213,  499.713781178900035,  502.118614895519954,
   504.525155075953876,  506.933395041265726,  509.343328164597040,  511.754947870560216,  514.168247634641489,
   516.583220982612261,  518.999861489950604,  521.418162781270325,  523.838118529760095,  526.259722456629902,
   528.682968330566723,  531.107849967197808,  533.534361228562375,  535.962496022591154,  538.392248302593543,
   540.823612066752617,  543.256581357626942,  545.691150261661164,  548.127312908701924,  550.565063471522308,
   553.004396165352659,  555.445305247417878,  557.887785016482326,  560.331829812400429,  562.777434015673975,
   565.224592047016245,  567.673298366921358,  570.123547475240684,  572.575333910764925,  575.028652250812002,
   577.483497110820508,  579.939863143949538,  582.397745040683503,  584.857137528442763,  587.318035371199244,
   589.780433369098205,  592.244326358084095,  594.709709209532548,  597.176576829886699,  599.644924160298842,
   602.114746176276981,  604.586037887335920,  607.058794336653136,  609.533010600729313,  612.008681789053867,
   614.485803043773558,  616.964369539367226,  619.444376482324401,  621.925819110826751,  624.408692694435558,
   626.892992533782376,  629.378713960263894,  631.865852335741124,  634.354403052241537,  636.844361531666323,
   639.335723225500601,  641.828483614527499,  644.322638208545868,  646.818182546092316,  649.315112194165522,
   651.813422747955087,  654.313109830573580,  656.814169092791303,  659.316596212775835,  661.820386895832939,
   664.325536874152931,  666.832041906557720,  669.339897778253544,  671.849100300584723,  674.359645310791279,
   676.871528671770079,  679.384746271838026,  681.899294024498317,  684.415167868210006,  686.932363766159938,
   689.450877706038000,  691.970705699813720,  694.491843783517652,  697.014288017024001,  699.538034483835531,
   702.063079290872338,  704.589418568262204,  707.117048469133579,  709.645965169411170,  712.176164867614261,
   714.707643784656625,  717.240398163649161,  719.774424269705264,  722.309718389748014,  724.846276832319518,
   727.384095927392764,  729.923172026185512,  732.463501500976349,  735.005080744923021,  737.547906171882232,
   740.091974216232529,  742.637281332698308,  745.183823996176443,  747.731598701564280,  750.280601963590016,
   752.830830316645120,  755.382280314618015,  757.934948530730139,  760.488831557374169,  763.043926005952471,
   765.600228506719759,  768.157735708625410,  770.716444279158509,  773.276350904194601,  775.837452287843689,
   778.399745152300170,  780.963226237694471,  783.527892301946622,  786.093740120620168,  788.660766486779266,
   791.228968210846233,  793.798342120461257,  796.368885060343132,  798.940593892151810,  801.513465494352317,
   804.087496762080036,  806.662684607007691,  809.239025957213471,  811.816517757050747,  814.395156967018806,
   816.974940563635641,  819.555865539311185,  822.137928902222939,  824.721127676191600,  827.305458900559074,
   829.890919630067629,  832.477506934739381,  835.065217899758181,  837.654049625352400,  840.243999226678170,
   842.835063833704680,  845.427240591100599,  848.020526658120957,  850.614919208496417,  853.210415430321973,
   855.807012525948380,  858.404707711874039,  861.003498218637105,  863.603381290710786,  866.204354186397495,
   868.806414177725401,  871.409558550345650,  874.013784603430167,  876.619089649571265,  879.225471014681830,
   881.832926037896527,  884.441452071473691,  887.051046480698915,  889.661706643788875,  892.273429951796174,
   894.886213808515890,  897.500055630392012,  900.114952846425012,  902.730902898081467,  905.347903239202424,
   907.965951335914497,  910.585044666541307,  913.205180721515035,  915.826357003290013,  918.448571026256332,
   921.071820316654225,  923.696102412489950,  926.321414863451537,  928.947755230826601,  931.575121087419348,
   934.203510017469625,  936.832919616572440,  939.463347491597460,  942.094791260610577,  944.727248552795231,
   947.360717008374877,  949.995194278535564,  952.630678025350562,  955.267165921703850,  957.904655651216331,
   960.543144908171030,  963.182631397439536,  965.823112834410040,  968.464586944914117,  971.107051465156246,
   973.750504141642409,  976.394942731110291,  979.040365000459474,  981.686768726682430,  984.334151696797107,
   986.982511707778031,  989.631846566490140,  992.282154089622168,  994.933432103620248,  997.585678444623568,
   1000.238890958398883, 1002.893067500276857, 1005.548205935088276, 1008.204304137101076, 1010.861359989958146,
   1013.519371386615262, 1016.178336229279694, 1018.838252429349609, 1021.499117907353479, 1024.160930592890736,
   1026.823688424572310, 1029.487389349962086, 1032.152031325518010, 1034.817612316536042, 1037.484130297091042,
   1040.151583249980831, 1042.819969166670944, 1045.489286047236874, 1048.159531900310867, 1050.830704743026217,
   1053.502802600962013, 1056.175823508090616, 1058.849765506724907, 1061.524626647462810, 1064.200404989136814,
   1066.877098598761677, 1069.554705551482130, 1072.233223930522172, 1074.912651827134368, 1077.592987340548916,
   1080.274228577924532, 1082.956373654298432, 1085.639420692536987, 1088.323367823288663, 1091.008213184933084,
   1093.693954923535330, 1096.380591192797738, 1099.068120154012377, 1101.756539976015119, 1104.445848835138577,
   1107.136044915167076, 1109.827126407290052, 1112.519091510057478, 1115.211938429334850, 1117.905665378258163,
   1120.600270577191850, 1123.295752253682167, 1125.992108642415360, 1128.689337985175143, 1131.387438530798363,
   1134.086408535134524, 1136.786246261001907, 1139.486949978146868, 1142.188517963202685, 1144.890948499648403,
   1147.594239877766995, 1150.298390394606713, 1153.003398353939929, 1155.709262066224028, 1158.415979848560937,
   1161.123550024658698, 1163.831970924793495, 1166.541240885769412, 1169.251358250880912, 1171.962321369876463,
   1174.674128598917378, 1177.386778300544620, 1180.100268843638787, 1182.814598603383729, 1185.529765961232442,
   1188.245769304867281, 1190.962607028166758, 1193.680277531168940, 1196.398779220036204, 1199.118110507019992,
   1201.838269810426027, 1204.559255554579522, 1207.281066169792211, 1210.003700092326199, 1212.727155764361214,
   1215.451431633962102, 1218.176526155043348, 1220.902437787338386, 1223.629164996365262, 1226.356706253393668,
   1229.085060035414926, 1231.814224825107658, 1234.544199110807313, 1237.274981386473428, 1240.006570151660299,
   1242.738963911483324, 1245.472161176589907, 1248.206160463128299, 1250.940960292716909, 1253.676559192415198,
   1256.412955694692073, 1259.150148337396558, 1261.888135663730054, 1264.626916222214504, 1267.366488566664657,
   1270.106851256158734, 1272.848002855010463, 1275.589941932739748, 1278.332667064044472, 1281.076176828772986,
   1283.820469811895691, 1286.565544603477520, 1289.311399798651337, 1292.058033997588836, 1294.805445805475529,
   1297.553633832481410, 1300.302596693737769, 1303.052333009306949, 1305.802841404158016, 1308.554120508141523,
   1311.306168955960857, 1314.058985387149278, 1316.812568446041951, 1319.566916781753207, 1322.322029048148352,
   1325.077903903820697, 1327.834540012066554, 1330.591936040859537, 1333.350090662826915, 1336.109002555224833,
   1338.868670399914663, 1341.629092883337762, 1344.390268696493422, 1347.152196534913855, 1349.914875098641460,
   1352.678303092204487, 1355.442479224594535, 1358.207402209244719, 1360.973070764003523, 1363.739483611116157,
   1366.506639477198178, 1369.274537093216168, 1372.043175194464084, 1374.812552520540066, 1377.582667815327341,
   1380.353519826969205, 1383.125107307850612, 1385.897429014573390, 1388.670483707937819, 1391.444270152918762,
   1394.218787118647469, 1396.994033378387485, 1399.770007709517131, 1402.546708893505411, 1405.324135715894727,
   1408.102286966278598, 1410.881161438281197, 1413.660757929538931, 1416.441075241679073, 1419.222112180300428,
   1422.003867554952649, 1424.786340179119179, 1427.569528870194290, 1430.353432449467164, 1433.138049742099838,
   1435.923379577110836, 1438.709420787353110, 1441.496172209498809, 1444.283632684017221, 1447.071801055158403,
   1449.860676170933630, 1452.650256883098109, 1455.440542047131430, 1458.231530522220282, 1461.023221171240493,
   1463.815612860738611, 1466.608704460915305, 1469.402494845606043, 1472.196982892265169, 1474.992167481947490,
   1477.788047499291906, 1480.584621832502080, 1483.381889373332797, 1486.179849017069955, 1488.978499662515333,
   1491.777840211968851, 1494.577869571213114, 1497.378586649495446, 1500.179990359512885, 1502.982079617394447,
   1505.784853342686574, 1508.588310458334945, 1511.392449890670377, 1514.197270569391321, 1517.002771427549760,
   1519.808951401533704, 1522.615809431052639, 1525.423344459121381, 1528.231555432045525, 1531.040441299405302,
   1533.850001014040799, 1536.660233532035591, 1539.471137812704455, 1542.282712818574964, 1545.094957515375427,
   1547.907870872018293, 1550.721451860586512, 1553.535699456318298, 1556.350612637593485, 1559.166190385917616,
   1561.982431685909432, 1564.799335525285187, 1567.616900894845003, 1570.435126788458774, 1573.254012203052980,
   1576.073556138594768, 1578.893757598080356, 1581.714615587520029, 1584.536129115924950, 1587.358297195292835,
   1590.181118840596127, 1593.004593069766315, 1595.828718903682784, 1598.653495366158495, 1601.478921483926342,
   1604.304996286627102, 1607.131718806796243, 1609.959088079849835, 1612.787103144073853, 1615.615763040609181,
   1618.445066813440235, 1621.275013509381779, 1624.105602178066874, 1626.936831871934146, 1629.768701646214367,
   1632.601210558920911, 1635.434357670833606, 1638.268142045490094, 1641.102562749171511, 1643.937618850891567,
   1646.773309422384045, 1649.609633538090975, 1652.446590275150356, 1655.284178713386154, 1658.122397935293520,
   1660.961247026030833, 1663.800725073405147, 1666.640831167861734, 1669.481564402473623, 1672.322923872928413,
   1675.164908677518497, 1678.007517917129007, 1680.850750695227134, 1683.694606117850299, 1686.539083293596150,
   1689.384181333610286, 1692.229899351576705, 1695.076236463706664, 1697.923191788726399, 1700.770764447868714,
   1703.618953564860021, 1706.467758265911925, 1709.317177679708720, 1712.167210937398522, 1715.017857172581671,
   1717.869115521300500, 1720.720985122030470, 1723.573465115667204, 1726.426554645519218, 1729.280252857295181,
   1732.134558899096191, 1734.989471921404174, 1737.844991077072109, 1740.701115521314250, 1743.557844411697261,
   1746.415176908128615, 1749.273112172847732, 1752.131649370417563, 1754.990787667712084, 1757.850526233909250,
   1760.710864240480078, 1763.571800861180236, 1766.433335272039358, 1769.295466651352399, 1772.158194179670318,
   1775.021517039790751, 1777.885434416748694, 1780.749945497807175, 1783.615049472448163, 1786.480745532364381,
   1789.347032871448391, 1792.213910685786004, 1795.081378173644907, 1797.949434535468072, 1800.818078973862839,
   1803.687310693593872, 1806.557128901573151, 1809.427532806852241, 1812.298521620612973, 1815.170094556158574,
   1818.042250828907072, 1820.914989656379703, 1823.788310258194997, 1826.662211856059685, 1829.536693673758919,
   1832.411754937150818, 1835.287394874154870, 1838.163612714746478, 1841.040407690947177, 1843.917779036816910,
   1846.795725988446065, 1849.674247783947294, 1852.553343663447322, 1855.433012869079448, 1858.313254644974904,
   1861.194068237255806, 1864.075452894026284, 1866.957407865365894, 1869.839932403320745, 1872.723025761896452,
   1875.606687197050178, 1878.490915966682678, 1881.375711330631702, 1884.261072550663130, 1887.146998890464829,
   1890.033489615637109, 1892.920543993687943, 1895.808161294023876, 1898.696340787942063, 1901.585081748625043,
   1904.474383451131416, 1907.364245172389474, 1910.254666191190609, 1913.145645788180218, 1916.037183245852702,
   1918.929277848543279, 1921.821928882420480, 1924.715135635480465, 1927.608897397538385, 1930.503213460222696,
   1933.398083116968110, 1936.293505663007409, 1939.189480395366445, 1942.086006612855954, 1944.983083616065414,
   1947.880710707356002, 1950.778887190853538, 1953.677612372443036, 1956.576885559760740, 1959.476706062187759,
   1962.377073190844158, 1965.277986258581905, 1968.179444579977826, 1971.081447471328829, 1973.983994250642581,
   1976.887084237634554, 1979.790716753718925, 1982.694891122002900, 1985.599606667281932, 1988.504862716030175,
   1991.410658596397980, 1994.316993638203030, 1997.223867172925111, 2000.131278533699970, 2003.039227055312040,
   2005.947712074190576, 2008.856732928401925, 2011.766288957642928, 2014.676379503237058, 2017.587003908126462,
   2020.498161516866276, 2023.409851675620303, 2026.322073732152603, 2029.234827035823855, 2032.148110937584306,
   2035.061924789968089, 2037.976267947087308, 2040.891139764627496, 2043.806539599839653, 2046.722466811536833,
   2049.638920760086421, 2052.555900807407397, 2055.473406316959881, 2058.391436653744677, 2061.309991184294631,
   2064.229069276670998, 2067.148670300455251, 2070.068793626745901, 2072.989438628152584, 2075.910604678790151,
   2078.832291154273662, 2081.754497431712934, 2084.677222889706627, 2087.600466908336784, 2090.524228869165199,
   2093.448508155227046, 2096.373304151024968, 2099.298616242524986, 2102.224443817149677, 2105.150786263774989,
   2108.077642972724789, 2111.005013335763579, 2113.932896746094229, 2116.861292598351156, 2119.790200288595315,
   2122.719619214309660, 2125.649548774394134, 2128.579988369160674, 2131.510937400328203, 2134.442395271017631,
   2137.374361385745487, 2140.306835150422557, 2143.239815972345696, 2146.173303260194189, 2149.107296424025662,
   2152.041794875269261, 2154.976798026722918, 2157.912305292547444, 2160.848316088262891, 2163.784829830741728,
   2166.721845938206116, 2169.659363830224265, 2172.597382927700437, 2175.535902652876757, 2178.474922429325034,
   2181.414441681943572, 2184.354459836951264, 2187.294976321884405, 2190.235990565589873, 2193.177501998224216,
   2196.119510051246380, 2199.062014157414524, 2202.005013750780563, 2204.948508266686986, 2207.892497141760487,
   2210.836979813910602, 2213.781955722322436, 2216.727424307454385, 2219.673385011031769, 2222.619837276045473,
   2225.566780546742848, 2228.514214268629985, 2231.462137888461712, 2234.410550854240228, 2237.359452615210103,
   2240.308842621855547, 2243.258720325892227, 2246.209085180268630, 2249.159936639156967, 2252.111274157952721,
   2255.063097193268732, 2258.015405202931106, 2260.968197645975124, 2263.921473982642510, 2266.875233674375522,
   2269.829476183814677, 2272.784200974793748, 2275.739407512336129, 2278.695095262649374, 2281.651263693124747,
   2284.607912272329941, 2287.565040470006807, 2290.522647757066807, 2293.480733605588284, 2296.439297488810098,
   2299.398338881131167, 2302.357857258104104, 2305.317852096432489, 2308.278322873966772, 2311.239269069700185,
   2314.200690163767376, 2317.162585637434859, 2320.124954973105105, 2323.087797654306087, 2326.051113165692186,
   2329.014900993037372, 2331.979160623234293, 2334.943891544288363, 2337.909093245314125, 2340.874765216534342,
   2343.840906949273176, 2346.807517935955275, 2349.774597670099411, 2352.742145646318932, 2355.710161360312213,
   2358.678644308866296, 2361.647593989847337, 2364.617009902201517, 2367.586891545947765, 2370.557238422177761,
   2373.528050033050931, 2376.499325881788991, 2379.471065472676401, 2382.443268311055363, 2385.415933903321729,
   2388.389061756921365, 2391.362651380348780, 2394.336702283141676, 2397.311213975879127, 2400.286185970177030,
   2403.261617778686286, 2406.237508915087801, 2409.213858894091118, 2412.190667231428961, 2415.167933443856782,
   2418.145657049145484, 2421.123837566082784, 2424.102474514467303, 2427.081567415105383, 2430.061115789809719,
   2433.041119161393453, 2436.021577053669716, 2439.002488991446626, 2441.983854500525013, 2444.965673107695693,
   2447.947944340734921, 2450.930667728403478, 2453.913842800441671, 2456.897469087566151, 2459.881546121469000,
   2462.866073434812733, 2465.851050561228021, 2468.836477035310963, 2471.822352392619450, 2474.808676169669980,
   2477.795447903936292, 2480.782667133844825, 2483.770333398771072, 2486.758446239039131, 2489.747005195917609,
   2492.736009811616441, 2495.725459629282796, 2498.715354193001986, 2501.705693047789737, 2504.696475739592643,
   2507.687701815284981, 2510.679370822665078, 2513.671482310452120, 2516.664035828283886, 2519.657030926715379,
   2522.650467157213370, 2525.644344072154581, 2528.638661224823863, 2531.633418169411470, 2534.628614461008510,
   2537.624249655606036, 2540.620323310091408, 2543.616834982246019, 2546.613784230741203, 2549.611170615138690,
   2552.608993695884237, 2555.607253034307632, 2558.605948192619508, 2561.605078733906794}};
