#include <stdio.h>

int main() {
    //DP = densidade populacional: p / area
    //PPC = PIB per Capita: PIB / p
    
    char pais[50], sta1[50], sta2[50], sta3[50], sta4[50], sta5[50], sta6[50], sta7[50], sta8[50];
    char C1[50], C2[50], C3[50], C4[50], C5[50], C6[50], C7[50], C8[50], C9[50], C10[50], C11[50], C12[50], C13[50], C14[50], C15[50], C16[50], C17[50], C18[50], C19[50], C20[50], C21[50], C22[50], C23[50], C24[50], C25[50], C26[50], C27[50], C28[50], C29[50], C30[50], C31[50], C32[50];
    int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32;
    int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32;
    float pib1, pib2, pib3, pib4, pib5, pib6, pib7, pib8, pib9, pib10, pib11, pib12, pib13, pib14, pib15, pib16, pib17, pib18, pib19, pib20, pib21, pib22, pib23, pib24, pib25, pib26, pib27, pib28, pib29, pib30, pib31, pib32;
    float area1, area2, area3, area4, area5, area6, area7, area8, area9, area10, area11, area12, area13, area14, area15, area16, area17, area18, area19, area20, area21, area22, area23, area24, area25, area26, area27, area28, area29, area30, area31, area32;
    float dp1, dp2, dp3, dp4, dp5, dp6, dp7, dp8, dp9, dp10, dp11, dp12, dp13, dp14, dp15, dp16, dp17, dp18, dp19, dp20, dp21, dp22, dp23, dp24, dp25, dp26, dp27, dp28, dp29, dp30, dp31, dp32;
    float ppc1, ppc2, ppc3, ppc4, ppc5, ppc6, ppc7, ppc8, ppc9, ppc10, ppc11, ppc12, ppc13, ppc14, ppc15, ppc16, ppc17, ppc18, ppc19, ppc20, ppc21, ppc22, ppc23, ppc24, ppc25, ppc26, ppc27, ppc28, ppc29, ppc30, ppc31, ppc32;


    printf ("Qual o nome do seu País?\n");
    scanf ("%s", &pais);
    printf ("O seu País terá 8 estados, e cada um deles possuem 4 cidades (totalizando 32 cidades), q serão definidas por nomes dados por você.\n ");
    printf ("-----------------------------------\n");
    printf ("Qual o nome do primeiro Estado?\n");
    scanf ("%s", &sta1);

    printf (" - Estado: %s\n", sta1);
    printf ("Qual o nome da 1° cidade?\n");
    scanf ("%s", &C1);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p1);
    printf ("Área(km²):\n");
    scanf ("%f", &area1);
    printf ("PIB:\n");
    scanf ("%d", &pib1);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t1);
    dp1 = (float) p1 / area1;
    ppc1 = (float) pib1 / p1;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp1, ppc1);

    printf ("\n");
    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta1);
    printf ("Qual o nome da 2° cidade?\n");
    scanf ("%s", &C2);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p2);
    printf ("Área(km²):\n");
    scanf ("%f", &area2);
    printf ("PIB:\n");
    scanf ("%d", &pib2);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t2);
    dp1 = (float) p2 / area2;
    ppc1 = (float) pib2 / p2;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp2, ppc2);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta1);
    printf ("Qual o nome da 3° cidade?\n");
    scanf ("%s", &C3);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p3);
    printf ("Área(km²):\n");
    scanf ("%f", &area3);
    printf ("PIB:\n");
    scanf ("%d", &pib3);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t3);
    dp1 = (float) p3 / area3;
    ppc1 = (float) pib3 / p3;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp3, ppc3);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta1);
    printf ("Qual o nome da 4° cidade?\n");
    scanf ("%s", &C4);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p4);
    printf ("Área(km²):\n");
    scanf ("%f", &area4);
    printf ("PIB:\n");
    scanf ("%d", &pib4);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t4);
    dp1 = (float) p4 / area4;
    ppc1 = (float) pib4 / p4;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp4, ppc4);

    printf ("-----------------------------------\n");
    printf ("\n");
    printf ("-----------------------------------\n");
    printf ("\n");

    printf ("Qual o nome do segundo Estado?\n");
    scanf ("%s", &sta2);
    printf ("\n");
    printf ("Qual o nome da 1° cidade?\n");
    scanf ("%s", &C5);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p5);
    printf ("Área(km²):\n");
    scanf ("%f", &area5);
    printf ("PIB:\n");
    scanf ("%d", &pib5);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t5);
    dp1 = (float) p5 / area5;
    ppc1 = (float) pib5 / p5;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp5, ppc5);

    printf ("\n");
    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta2);
    printf ("Qual o nome da 2° cidade?\n");
    scanf ("%s", &C6);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p6);
    printf ("Área(km²):\n");
    scanf ("%f", &area6);
    printf ("PIB:\n");
    scanf ("%d", &pib6);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t6);
    dp1 = (float) p6 / area6;
    ppc1 = (float) pib6 / p6;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp6, ppc6);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta2);
    printf ("Qual o nome da 3° cidade?\n");
    scanf ("%s", &C7);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p7);
    printf ("Área(km²):\n");
    scanf ("%f", &area7);
    printf ("PIB:\n");
    scanf ("%d", &pib7);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t7);
    dp1 = (float) p7 / area7;
    ppc1 = (float) pib7 / p7;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp7, ppc7);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta2);
    printf ("Qual o nome da 4° cidade?\n");
    scanf ("%s", &C8);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p8);
    printf ("Área(km²):\n");
    scanf ("%f", &area8);
    printf ("PIB:\n");
    scanf ("%d", &pib8);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t8);
    dp1 = (float) p8 / area8;
    ppc1 = (float) pib8 / p8;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp8, ppc8);

    printf ("-----------------------------------\n");
    printf ("\n");
    printf ("-----------------------------------\n");

    printf ("Qual o nome do terceiro Estado?\n");
    scanf ("%s", &sta3);
    printf ("\n");
    printf ("Qual o nome da 1° cidade?\n");
    scanf ("%s", &C9);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p9);
    printf ("Área(km²):\n");
    scanf ("%f", &area9);
    printf ("PIB:\n");
    scanf ("%d", &pib9);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t9);
    dp1 = (float) p9 / area9;
    ppc1 = (float) pib9 / p9;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp9, ppc9);

    printf ("\n");
    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta3);
    printf ("Qual o nome da 2° cidade?\n");
    scanf ("%s", &C10);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p10);
    printf ("Área(km²):\n");
    scanf ("%f", &area10);
    printf ("PIB:\n");
    scanf ("%d", &pib10);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t10);
    dp1 = (float) p10 / area10;
    ppc1 = (float) pib10 / p10;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp10, ppc10);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta3);
    printf ("Qual o nome da 3° cidade?\n");
    scanf ("%s", &C11);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p11);
    printf ("Área(km²):\n");
    scanf ("%f", &area11);
    printf ("PIB:\n");
    scanf ("%d", &pib11);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t11);
    dp1 = (float) p11 / area11;
    ppc1 = (float) pib11 / p11;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp11, ppc11);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta3);
    printf ("Qual o nome da 4° cidade?\n");
    scanf ("%s", &C12);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p12);
    printf ("Área(km²):\n");
    scanf ("%f", &area12);
    printf ("PIB:\n");
    scanf ("%d", &pib12);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t12);
    dp1 = (float) p12 / area12;
    ppc1 = (float) pib12 / p12;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp12, ppc12);

    printf ("-----------------------------------\n");
    printf ("\n");
    printf ("-----------------------------------\n");

    printf ("Qual o nome do quarto Estado?\n");
    scanf ("%s", &sta4);
    printf ("\n");
    printf ("Qual o nome da 1° cidade?\n");
    scanf ("%s", &C13);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p13);
    printf ("Área(km²):\n");
    scanf ("%f", &area13);
    printf ("PIB:\n");
    scanf ("%d", &pib13);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t13);
    dp1 = (float) p13 / area13;
    ppc1 = (float) pib13 / p13;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp13, ppc13);

    printf ("\n");
    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta4);
    printf ("Qual o nome da 2° cidade?\n");
    scanf ("%s", &C14);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p14);
    printf ("Área(km²):\n");
    scanf ("%f", &area14);
    printf ("PIB:\n");
    scanf ("%d", &pib14);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t14);
    dp1 = (float) p14 / area14;
    ppc1 = (float) pib14 / p14;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp14, ppc14);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta4);
    printf ("Qual o nome da 3° cidade?\n");
    scanf ("%s", &C15);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p15);
    printf ("Área(km²):\n");
    scanf ("%f", &area15);
    printf ("PIB:\n");
    scanf ("%d", &pib15);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t15);
    dp1 = (float) p15 / area15;
    ppc1 = (float) pib15 / p15;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp15, ppc15);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta4);
    printf ("Qual o nome da 4° cidade?\n");
    scanf ("%s", &C16);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p16);
    printf ("Área(km²):\n");
    scanf ("%f", &area16);
    printf ("PIB:\n");
    scanf ("%d", &pib16);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t16);
    dp1 = (float) p16 / area16;
    ppc1 = (float) pib16 / p16;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp16, ppc16);

    printf ("-----------------------------------\n");
    printf ("\n");
    printf ("-----------------------------------\n");

        printf ("Qual o nome do quinto Estado?\n");
    scanf ("%s", &sta5);
    printf ("\n");
    printf ("Qual o nome da 1° cidade?\n");
    scanf ("%s", &C17);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p17);
    printf ("Área(km²):\n");
    scanf ("%f", &area17);
    printf ("PIB:\n");
    scanf ("%d", &pib17);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t17);
    dp1 = (float) p17 / area17;
    ppc1 = (float) pib17 / p17;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp17, ppc17);

    printf ("\n");
    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta5);
    printf ("Qual o nome da 2° cidade?\n");
    scanf ("%s", &C18);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p18);
    printf ("Área(km²):\n");
    scanf ("%f", &area18);
    printf ("PIB:\n");
    scanf ("%d", &pib18);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t18);
    dp1 = (float) p18 / area18;
    ppc1 = (float) pib18 / p18;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp18, ppc18);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta5);
    printf ("Qual o nome da 3° cidade?\n");
    scanf ("%s", &C19);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p19);
    printf ("Área(km²):\n");
    scanf ("%f", &area19);
    printf ("PIB:\n");
    scanf ("%d", &pib19);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t19);
    dp1 = (float) p19 / area19;
    ppc1 = (float) pib19 / p19;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp19, ppc19);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta5);
    printf ("Qual o nome da 4° cidade?\n");
    scanf ("%s", &C20);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p20);
    printf ("Área(km²):\n");
    scanf ("%f", &area20);
    printf ("PIB:\n");
    scanf ("%d", &pib20);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t20);
    dp1 = (float) p20 / area20;
    ppc1 = (float) pib20 / p20;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp1, ppc20);

    printf ("-----------------------------------\n");
    printf ("\n");
    printf ("-----------------------------------\n");

    printf ("Qual o nome do sexto Estado?\n");
    scanf ("%s", &sta6);
    printf ("\n");
    printf ("Qual o nome da 1° cidade?\n");
    scanf ("%s", &C21);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p21);
    printf ("Área(km²):\n");
    scanf ("%f", &area21);
    printf ("PIB:\n");
    scanf ("%d", &pib21);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t21);
    dp1 = (float) p21 / area21;
    ppc1 = (float) pib21 / p21;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp21, ppc21);

    printf ("\n");
    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta6);
    printf ("Qual o nome da 2° cidade?\n");
    scanf ("%s", &C22);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p22);
    printf ("Área(km²):\n");
    scanf ("%f", &area22);
    printf ("PIB:\n");
    scanf ("%d", &pib22);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t22);
    dp1 = (float) p22 / area22;
    ppc1 = (float) pib22 / p22;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp22, ppc22);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta6);
    printf ("Qual o nome da 3° cidade?\n");
    scanf ("%s", &C23);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p23);
    printf ("Área(km²):\n");
    scanf ("%f", &area23);
    printf ("PIB:\n");
    scanf ("%d", &pib23);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t23);
    dp1 = (float) p23 / area23;
    ppc1 = (float) pib23 / p23;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp23, ppc23);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta6);
    printf ("Qual o nome da 4° cidade?\n");
    scanf ("%s", &C24);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p24);
    printf ("Área(km²):\n");
    scanf ("%f", &area24);
    printf ("PIB:\n");
    scanf ("%d", &pib24);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t24);
    dp1 = (float) p24 / area24;
    ppc1 = (float) pib24 / p24;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp24, ppc24);

    printf ("-----------------------------------\n");
    printf ("\n");
    printf ("-----------------------------------\n");

    printf ("Qual o nome do Sétimo Estado?\n");
    scanf ("%s", &sta7);
    printf ("\n");
    printf ("Qual o nome da 1° cidade?\n");
    scanf ("%s", &C25);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p25);
    printf ("Área(km²):\n");
    scanf ("%f", &area25);
    printf ("PIB:\n");
    scanf ("%d", &pib25);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t25);
    dp1 = (float) p25 / area25;
    ppc1 = (float) pib25 / p25;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp25, ppc25);

    printf ("\n");
    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta7);
    printf ("Qual o nome da 2° cidade?\n");
    scanf ("%s", &C26);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p26);
    printf ("Área(km²):\n");
    scanf ("%f", &area26);
    printf ("PIB:\n");
    scanf ("%d", &pib26);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t26);
    dp1 = (float) p26 / area26;
    ppc1 = (float) pib26 / p26;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp26, ppc26);


    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta7);
    printf ("Qual o nome da 3° cidade?\n");
    scanf ("%s", &C27);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p27);
    printf ("Área(km²):\n");
    scanf ("%f", &area27);
    printf ("PIB:\n");
    scanf ("%d", &pib27);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t27);
    dp1 = (float) p27 / area27;
    ppc1 = (float) pib27 / p27;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp27, ppc27);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta7);
    printf ("Qual o nome da 4° cidade?\n");
    scanf ("%s", &C28);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p28);
    printf ("Área(km²):\n");
    scanf ("%f", &area28);
    printf ("PIB:\n");
    scanf ("%d", &pib28);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t28);
    dp1 = (float) p28 / area28;
    ppc1 = (float) pib28 / p28;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp28, ppc28);

    printf ("-----------------------------------\n");
    printf ("\n");
    printf ("-----------------------------------\n");

    printf ("Qual o nome do Oitávo Estado?\n");
    scanf ("%s", &sta8);
    printf ("\n");
    printf ("Qual o nome da 1° cidade?\n");
    scanf ("%s", &C29);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p29);
    printf ("Área(km²):\n");
    scanf ("%f", &area29);
    printf ("PIB:\n");
    scanf ("%d", &pib29);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t29);
    dp1 = (float) p1 / area1;
    ppc1 = (float) pib29 / p29;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp29, ppc29);

    printf ("\n");
    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta8);
    printf ("Qual o nome da 2° cidade?\n");
    scanf ("%s", &C30);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p30);
    printf ("Área(km²):\n");
    scanf ("%f", &area30);
    printf ("PIB:\n");
    scanf ("%d", &pib30);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t30);
    dp1 = (float) p30 / area30;
    ppc1 = (float) pib30 / p30;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp1, ppc1);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta8);
    printf ("Qual o nome da 3° cidade?\n");
    scanf ("%s", &C31);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p31);
    printf ("Área(km²):\n");
    scanf ("%f", &area31);
    printf ("PIB:\n");
    scanf ("%d", &pib31);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t31);
    dp1 = (float) p31 / area31;
    ppc1 = (float) pib31 / p31;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp1, ppc1);

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" - Estado: %s\n", sta8);
    printf ("Qual o nome da 4° cidade?\n");
    scanf ("%s", &C32);
    printf ("-----------------------------------\n");
    printf ("População:\n");
    scanf ("%d", &p32);
    printf ("Área(km²):\n");
    scanf ("%f", &area32);
    printf ("PIB:\n");
    scanf ("%d", &pib32);
    printf ("Pontos turisticos\n");
    scanf ("%d", &t32);
    dp1 = (float) p32 / area32;
    ppc1 = (float) pib32 / p32;
    printf ("- Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", dp1, ppc1);

    printf ("-----------------------------------\n");
    printf ("\n");

    

    printf ("-----------------------------------\n");
    printf ("\n");

    printf (" ---------------- País: %s ----------------\n ---------------- 1° Estado: %s ----------------\n", pais, sta1);
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", C1, p1, area1, pib1, t1, dp1, ppc1);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", C2, p2, area2, pib2, t2, dp2, ppc2);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", C3, p3, area3, pib3, t3, dp3, ppc3);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", C4, p4, area4, pib4, t4, dp4, ppc4);
    printf ("----------------------------\n");
    printf ("\n");
    printf ("----------------------------\n");
    printf ("\n");

    printf (" ---------------- 2° Estado: %s ----------------\n", sta2);
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", C5, p5, area5, pib5, t5, dp5, ppc5);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", C6, p6, area6, pib6, t6, dp6, ppc6);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", C7, p7, area7, pib7, t7, dp7, ppc7);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita: %.5f\n", C8, p8, area8, pib8, t8, dp8, ppc8);
    printf ("----------------------------\n");
    printf ("\n");
    printf ("----------------------------\n");
    printf ("\n");

    printf (" ---------------- 3 °Estado: %s ----------------\n", sta3);
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f\n", C9, p9, area9, pib9, t9, dp9, ppc9);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f\n", C10, p10, area10, pib10, t10, dp10, ppc10);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f\n", C11, p11, area11, pib11, t11, dp11, ppc11);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f\n", C12, p12, area12, pib12, t12, dp12, ppc12);
    printf ("----------------------------\n");
    printf ("\n");
    printf ("----------------------------\n");
    printf ("\n");

    printf (" ---------------- 4° Estado: %s ----------------\n", sta4);
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f\n", C13, p13, area13, pib13, t13, dp13, ppc13);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n %.5f\n", C14, p14, area14, pib14, t14, dp14, ppc14);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f\n", C15, p15, area15, pib15, t15, dp15, ppc15);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f\n", C16, p16, area16, pib16, t16, dp16, ppc16);
    printf ("\n");
    printf ("----------------------------\n");
    printf ("\n");  

    printf (" ---------------- 5° Estado: %s ----------------\n", sta5);
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C17, p17, area17, pib17, t17, dp17, ppc17);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C18, p18, area18, pib18, t18, dp18, ppc18);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C19, p19, area19, pib19, t19, dp19, ppc19);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C20, p20, area20, pib20, t20, dp20, ppc20);
    printf ("\n");
    printf ("----------------------------\n");
    printf ("\n");

    printf (" ---------------- 6° Estado: %s ----------------\n", sta6);
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C21, p21, area21, pib21, t21, dp21, ppc21);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C22, p22, area22, pib22, t22, dp22, ppc22);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C23, p23, area23, pib23, t23, dp23, ppc23);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C24, p24, area24, pib24, t24, dp24, ppc24);
    printf ("\n");
    printf ("----------------------------\n");
    printf ("\n");

    printf (" ---------------- 7° Estado: %s ----------------\n", sta7);
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C25, p25, area25, pib25, t25, dp25, ppc25);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C26, p26, area26, pib26, t26, dp26, ppc26);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C27, p27, area27, pib27, t27, dp27, ppc27);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C28, p28, area28, pib28, t28, dp28, ppc28);
    printf ("\n");
    printf ("----------------------------\n");
    printf ("\n");

    printf (" ---------------- 8° Estado: %s ----------------\n", sta8);
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C29, p29, area29, pib29, t29, dp29, ppc29);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C30, p30, area30, pib30, t30, dp30, ppc30);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C31, p31, area31, pib31, t31, dp31, ppc31);
    printf ("----------------------------\n");
    printf (" - Cidade: %s\n - População: %d\n - Área: %f\n - PIB: %d\n - Pontos Turisticos: %d\n - Densidade Populacional: %.5f\n - PIB per Capita\n: %.5f", C32, p32, area32, pib32, t32, dp32, ppc32);
    printf ("\n");
    printf ("----------------------------\n");

    return 0;
}