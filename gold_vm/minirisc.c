/* Copyright (C) 2026 Théotime Bollengier <theotime.bollengier@ensta.fr> */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>
static uint32_t zob[]={
0xb7c3d7a2,0x6c8a4c9c,0x2debe9e1,0xdcdf3554,0xe2152191,0xdb8f819b,0x7f3bf2e7,0x17afefd4,0x894c9d63,0x6e9ad5f6,0x112d8f45,0xeb65ece9,
0x05e6ffb7,0x315d3855,0xbf5abed8,0xa03e02e8,0x298dcf58,0x7811079e,0x6696ede5,0x3d8021ba,0xcdd25556,0xcc7f9fbb,0xac11cbd5,0xac64116c,
0xf4c44557,0x2ab4b6d6,0x6b882dd4,0x503e0668,0x7e75e1eb,0x4e133c28,0x6542efce,0x0b91107b,0x15dc21af,0x788713d6,0x339a1051,0x7fccc278,
0x23a080b3,0x6b4de7b4,0x41e09413,0x49990bfc,0x66c7a3bd,0x0a8c3082,0x6ee901e9,0xfd335880,0xc4ab7c1b,0x2402206a,0xc4f9d25d,0xaa484de1,
0x249cea8d,0xd1cf269f,0xcc096845,0x690dad84,0xdd0509a7,0xed5ac797,0xdc94a231,0x1c73b918,0xfb932769,0x33186568,0xf9d7c6ed,0x1b177355,
0x62a3c002,0x99a02219,0x0f4b1f64,0xfc51eb46,0x47ce7b46,0x2bfdb16f,0x95607772,0xd0aaef19,0x6e8ff003,0x51df8197,0xe28d1e7a,0x2fb7b688,
0x18b18c77,0x21a0896e,0x957d0311,0xc30e3989,0x5657a9b9,0x846a0b13,0x46f8079c,0x5bd493a1,0xc669a212,0x9a37d672,0xa09e37b4,0xc4661570,
0xee8b1807,0x4f41c122,0xf84eafb5,0x9754abac,0xb7b63a97,0x2b0d2b26,0xe467e01c,0xa6847175,0xa7078b2b,0x472fbcb2,0x7143c581,0x03518674,
0xea8285aa,0xb9ed7148,0x26d517d5,0xfd1e30fb,0x7d6f6eaa,0x5be68673,0xedbb59d1,0xd3db976f,0xcb31628f,0x27e7844e,0x91457e45,0x2d9137c0,
0x33705819,0xe05a25ba,0x5d6129fc,0x56a8d48a,0x5649ee7a,0x3dfcb14e,0x26438f1f,0xb8f45808,0xaed12361,0x19e8d802,0x7fe15ab5,0x096e70ac,
0x31bff514,0x9001f523,0x832cd7ba,0x141b7a50,0xe8eacfd7,0xce3a93d2,0xe7a55d19,0x10da2154,0x396dcd0e,0x35d9ad2b,0x6147c371,0x59385880,
0xcf324a30,0xa065a257,0x97992931,0x48b0614f,0x364ccfe4,0xa69f6e31,0xe77f0d89,0x818f1665,0x798e0064,0x51279cce,0xf7400559,0xc760b377,
0xa12c009a,0x23785b54,0x9f913758,0x0f316d2f,0xf27584da,0xaab1b530,0x9121474c,0xd1822da9,0x187fbb97,0x7e5c2f08,0x9375123a,0x98874ba0,
0xd00f2c63,0x9798fe83,0x376f3e2d,0x8d1491a4,0x4f0f2c05,0x8fa75964,0xcfcbfb82,0xcf7cdbbc,0x8edd6b76,0x1d9ed621,0x6947bc96,0x6259dd32,
0x91178745,0x70825033,0xe5af2a1b,0xabb9eb41,0x9ab14edf,0x41e6aebf,0x75be94b4,0x6388a106,0x6adabb65,0x55008174,0x2dd739fd,0xb8918b0d,
0x9cd87f37,0x6fa64d16,0x101654e5,0x1d202f81,0xdfe697f5,0x834ed986,0x34db505c,0x0d6460e2,0x99bad29a,0x69b6d89e,0x5a9443c4,0x0b1656d5,
0x97581acb,0xe51d59fd,0x261e97f9,0x3b27c880,0x0bcf54f6,0x87276817,0x0774a6e6,0x11525b12,0x8f678988,0x4808e6f7,0x704f6e8f,0xd1d1be7e,
0x693b3f38,0x6c3b3cd7,0xe37be750,0xef95f528,0x5831a6da,0x7936379e,0x9bb5a251}; ///// gcc -W -Wall -O2 -static minirisc.c -o minirisc
static const char *sa=(char*)(zob+47), *sb=(char*)(zob+62), *sc=(char*)(zob+75),*sd=(char*)(zob+90),*se=(char*)(zob+91),*sf=(char*)(
zob+92),*sg=(char*)(zob+94),*sh=(char*)(zob+106),*si=(char*)(zob+120),*sj=(char*)(zob+132),*sk=(char*)(zob+146),*sl=(char*)(zob+161)
,*sm=(char*)(zob+168),*so=(char*)(zob+169),*sp=(char*)(zob+178),*sq=(char*)(zob+186),*sr=(char*)(zob+196),*ss=(char*)(zob+204),*su=(
char*)(zob+205),*sv=(char*)(zob+206),*sw=(char*)(zob                           +0x00000000), *st=(char*)(zob + 210); typedef struct{
uint32_t*al;uint32_t am;}an;typedef struct                                        {an*ao;}ap;typedef struct{uint32_t aq;uint32_t ar;
uint32_t as;uint32_t at[32];ap*au;int              av;}aw;static an*ax(unsigned        int am){an*ao=malloc(sizeof(an));ao->am=(am +
sizeof(uint32_t)-1)&~3;ao->al=malloc          (ao->am);if(ao->al==NULL){fprintf(          stderr,sa,ao->am,strerror(errno));exit(1);
}return ao;}static void ay(an*ao          ){if(!ao){return;}if(ao->al){free(ao->al);        }free(ao);} static int az(an * a, int b,
uint32_t c,uint32_t*d){if(c>=         a->am){return -1;}switch(b){case 0:*d=(uint32_t)(        ((uint8_t*)a->al)[c>>0]);break;case 1
:*d=(uint32_t)(((uint16_t*)        a->al)[c>>1]);break;case 3:*d=(uint32_t)(((uint32_t*)a->       al)[c>>2]);break;}return 0;}static
int ba(an*a,int b,uint32_t     c,uint32_t d){if(c>=a->am){return-1;}switch(b){case 0:((uint8_t      *)a->al)[c>>0]=(uint8_t)d;break;
case 1:((uint16_t*)a->al      )[c>>1]=(uint16_t)d;break;case 3:((uint32_t*)a->al)[c>>2]=(uint32_t     )d;break;}return 0;}static int
bb(int a, uint32_t b,       uint32_t*c){if(b&(uint32_t)a){return -1;}*c=0;return 0;}static int bc      (int a,uint32_t b,uint32_t c)
{if(b&(uint32_t)a){       return -1;}switch(b){case 0:printf(sd,c&0xff);fflush(stdout);break;case 4      :printf(se, (int)c);fflush(
stdout);break;case       8:printf(sf,c);        fflush(stdout);break;default:       return-1;}return      0;} static ap* bd(){ap *a=
malloc(sizeof(ap))     ;a->ao=ax(33554432         );return a;}static void              be(ap *a){if(!      a){return;}ay(a->ao);free
(a);}static int bf     (ap*a,int b,                 uint32_t c,uint32_t*               d){if(c&(uint32_t     )b){return -2;} if (c>=
2147483648 && c<      2181038080 ){                  return az(a->ao,b,c                 -2147483648,d);     }else if(c>=268435456&&
c < 268435460){      return bb( b,c-                268435456,d);}return                 -1;} static int     bg(ap*a,int b, uint32_t
c,uint32_t d){if     (c&(uint32_t)b)                 {return -2;}if(c>=                  2147483648 &&c<      2181038080){ return ba
(a-> ao, b, c-      2147483648,d);}else             if(c>=268435456 && c<              268435460){ return     bc(b,c -268435456, d);
}return -1 ;}      static aw*bh(uint32_t         a,ap*b){aw*c=malloc(sizeof(        aw));memset(c,0,sizeof    (aw));c->aq=a;c->au=b;
return c;}static   void bi(aw*a){free(a);}static void bj(aw*a){switch(bf(a->au,3,a->aq,&a->ar)){case 0:a->     as=a->aq+4;break;case
-1 : fprintf(      stderr,sb,a->aq);a->av=1;break;case -2:fprintf(stderr,sc,a->aq);a->av=1;break;} }static     void cb(aw*zz){switch
((zz->ar&127))    {case 1:(zz->at[((zz->ar>>7)&31)]=(zz->ar&4294963200)& ((((zz->ar>>7)&31)==0)-1));break;     case 2:(zz->at[((zz->
ar>>7)&31)]=(     zz->aq+(zz->ar&4294963200))&((((zz->ar>>7)&31)==0)-1));break;case 3:(zz->at[((zz->ar>>7)     &31)]=(zz->as)&((((zz
->ar>>7)&31)==    0)-1));zz->as=zz->aq+(((int32_t)zz->ar>>11)&4294967294);break;case 4:{uint32_t target=((     (int32_t)zz->ar>>20)+
((int32_t)(zz->    at[((zz->ar>>12)&31)])))&4294967294;(zz->at[((zz->ar>>7)&31)]=(zz->as) &((((zz->ar>>7)&     31)== 0)-1)); zz->as=
target;}break;     case 5:if(((uint32_t)(                                           zz->at[((zz->ar>>12)&     31)]))==((uint32_t)(zz
->at[((zz->ar>>    7)&31)]))){zz->as=zz->                                           aq+ (((int32_t)zz->ar     >>19) & 4294967294); }
break;case 6:if     (((uint32_t)(zz->at[(     (zz->ar>>12)&31)]))!=((uint32_t)(     zz->at[((zz->ar>>7)&     31)]))){zz->as=zz->aq+(
((int32_t)zz->ar     >>19) & 4294967294);}     break;case 7:if(((int32_t)(zz->     at[((zz->ar>>12)&31)]     ))<((int32_t)(zz->at[((
zz->ar>>7)&31)]))     ){zz->as=zz->aq +(((     int32_t)zz->ar>>19)&4294967294     );}break;case 8:if(((     int32_t)(zz->at[((zz->ar
>>12)&31)])) >=((     int32_t)(zz->at[((zz->    ar>>7)&31)]))){zz->as=zz->aq     +(((int32_t)zz->ar>>19    )&4294967294);}break;case
9:if(((uint32_t)(zz     ->at[((zz->ar>>12)&31     )]))<((uint32_t)(zz->at[(     (zz->ar>>7)&31)]))){zz    ->as=zz->aq +(((int32_t)zz
->ar>>19)&4294967294)    ;}break;case 10:if(((       uint32_t)(zz->at[(       (zz->ar>>12)&31)]))>=(     (uint32_t)( zz->at[((zz->ar
>>7)&31)]))){zz->as=zz     ->aq+(((int32_t)zz->ar          >>19) &          4294967294);}break;case     11:{uint32_t zo =((int32_t)(
zz->at[((zz->ar>>12)&31     )]))+((int32_t)zz->ar>>                       20);uint32_t zu;if(bf(       zz->au, 0, zo, &zu)){fprintf(
stderr,sg,zo);zz->av=1;}      else{(zz->at[((zz->ar>>7)&31)]=(((int32_t)zu<<24)>>24)&((((zz->ar      >>7)&31)==0)-1));}} break; case
12:{uint32_t zo=((int32_t)      (zz->at[((zz->ar>>12)&31)]))+((int32_t)zz->ar>>20);uint32_t      zu;switch(bf(zz->au,1,zo,&zu)){case
0:(zz->at[((zz->ar>>7)&31)]=       (((int32_t)zu<<16)>>16)&((((zz->ar>>7)&31)==0)-1));break      ;case -1:fprintf(stderr,sg,zo);zz->
av=1;break;case-2:fprintf(stderr       ,sh,zo);zz->av=1;break;}}break;case 13:{uint32_t        zo=((int32_t)(zz->at[((zz->ar>>12)&31
)]))+((int32_t)zz->ar>>20);uint32_t       zu;switch(bf(zz->au,3,zo,&zu)){case 0:(zz->       at[((zz->ar>>7)&31)]=(zu)&((((zz->ar>>7)
&31)==0)-1));break;case -1:fprintf(           stderr,sg,zo);zz->av=1;break;case          -2:fprintf(stderr,sh,zo);zz->av=1; break;}}
break;case 14:{uint32_t zo=((int32_t)(zz            ->at[((zz->ar>>12)&31            )]))+((int32_t)zz->ar>>20);uint32_t zu;if(bf(zz
->au,0,zo,&zu)){fprintf(stderr,sg,zo);zz->av=                                    1;}else{(zz->at[((zz->ar>>7)&31)]=(zu&255)&((((zz->
ar>>7)&31)==0)-1));}}break;case 15:{uint32_t zo=((                         int32_t)(zz->at[((zz->ar>>12)&31)]))+((int32_t)zz->ar>>20
);uint32_t zu; switch(bf(zz->au,1,zo,&zu)){case 0:(zz->at[((zz->ar>>7)&31)]=(zu&65535) & ((((zz->ar>>7)&31)==0)-1)); break; case -1:
fprintf(stderr,sg,zo);zz->av=1;break;case -2:fprintf(stderr,sh,zo);zz->av=1;break;}} break;case 16:{uint32_t zo=((int32_t)(zz->at[((
zz->ar>>12)&31)]))+((int32_t)zz->ar>>20);if(bg(zz->au,0,zo,((int32_t)(zz->at[((zz->ar>>7)&31)]))&255)){fprintf(stderr,si,zo);zz->av=
1;}}break;case 17:{uint32_t zo=((int32_t)(zz->at[((zz->ar>>12)&31)]))+((int32_t)zz->ar>>20);switch(bg(zz->au,1,zo,((int32_t)(zz->at[
((zz->ar>>7)&31)]))&65535)){case -1:fprintf(stderr,si,zo);zz->av=1;break;case -2:fprintf(stderr,sj,zo);zz->av=1;break;default:break;
}}break;case 18:{uint32_t zo=((int32_t)(zz->at[((zz->ar>>12)&31)]))+((int32_t)zz->ar>>20);switch(bg(zz->au,3,zo,((int32_t)(zz->at[((
zz->ar>>7)&31)])))){case -1:fprintf(stderr,si,zo);zz->av=1;break;case -2:fprintf(stderr,sj,zo);zz->av=1;break;default:break;}}break;
case 19:(zz->at[((zz->ar>>7)&31)]=(((int32_t)(zz->at[((zz->ar>>12)&31)])) +((int32_t)zz->ar>>20))&((((zz->ar>>7)&31)==0) -1));break;
case 25:(zz->at[((zz->ar>>7)&31)]=(((uint32_t)(zz->at[((zz->ar>>12)&31)]))<<(((int32_t)zz->ar>>20)&0x1f))&((((zz->ar>>7)&31)==0)-1))
;break;case 20:(zz->at[((zz->ar>>7)&31)]=((((int32_t)(zz->at[((zz->ar>>12)&31)]))<((int32_t)zz->ar>>20))?1:0)&((((zz->ar>>7)&31)==0)
-1)); break;case 21:(zz->at[((zz->ar>>7)&31)]=((((uint32_t)(zz->at[((zz->ar>>12)&31)]))<(uint32_t)((int32_t)zz->ar>>20))?1:0)&((((zz
->ar>>7)&31)==0)-1));break;case 22:(zz->at[((zz->ar>>7)&31)]=(((int32_t)(zz->at[((zz->ar>>12)&31)]))^((int32_t)zz->ar>>20))&((((zz->
ar>>7)&31)==0)-1));break;case 26:(zz->at[((zz->ar>>7)&31)]=(((uint32_t)(zz->at[((zz->ar>>12)&31)]))>>(((int32_t)zz->ar>>20)&0x1f))&(
(((zz->ar>>7)&31)==0)-1)); break;case 27: (zz->at[((zz->ar>>7)&31)]=(((int32_t)(zz->at[((zz->ar>>12)&31)]))>>(((int32_t)zz->ar>>20)&
0x1f))&((((zz->ar>>7)&31)==0)-1));break;case 23:(zz->at[((zz->ar>>7)&31)]=(((int32_t)(zz->at[((zz->ar>>12)&31)]))|((int32_t)zz->ar>>
20))&((((zz->ar>>7)&31)==0)-1));break;case 24:(zz->at[((zz->ar>>7)&31)]=(((int32_t)(zz->at[((zz->ar>>12)&31)]))&((int32_t)zz->ar>>20
))&((((zz->ar>>7)&31)==0)-1));break;case 28:(zz->at[((zz->ar>>7)&31)]=(((int32_t)(zz->at[((zz->ar>>12)&31)]))+((int32_t)(zz->at[((zz
->ar>>17)&31)])))&((((zz->ar>>7)&31)== 0)-1)); break; case 29: (zz->at[((zz->ar>>7)&31)]= (((int32_t)(zz->at[((zz->ar>>12)&31)]))-((
int32_t)(zz->at[((zz->ar>>17)&31)])))&((((zz->ar>>7)&31)==0)-1)); break;case 30:(zz->at[((zz->ar>>7)&31)]=(((uint32_t)(zz->at[((zz->
ar>>12)&31)]))<<(((uint32_t)(zz->at[((zz->ar>>17)&31)]))&0x1f))&((((zz->ar>>7)&31)==0)-1));break;case 33:(zz->at[((zz->ar>>7)&31)]=(
(((int32_t)(zz->at[((zz->ar>>12)&31)]))<((int32_t)(zz->at[((zz->ar>>17)&31)])))?1:0)&((((zz->ar>>7)&31)==0)-1)); break;case 34:(zz->
at[((zz->ar>>7)&31)]=((((uint32_t)(zz->at[((zz->ar>>12)&31)]))<((uint32_t)(zz->at[((zz->ar>>17)&31)])))?1:0)&((((zz->ar>>7)&31)==0)-
1));break;case 35:(zz->at[((zz->ar>>7)&31)]=(((uint32_t)(zz->at[((zz->ar>>12)&31)]))^((uint32_t)(zz->at[((zz->ar>>17)&31)])))&((((zz
->ar>>7)&31)==0)-1)); break;case 31:(zz->at[((zz->ar>>7)&31)]=(((uint32_t)(zz->at[((zz->ar>>12)&31)]))>>(((uint32_t)(zz->at[((zz->ar
>>17)&31)]))&0x1f))&((((zz->ar>>7)&31)==0)-1)); break;case 32:(zz->at[((zz->ar>>7)&31)]=(((int32_t)(zz->at[((zz->ar>>12)&31)]))>>(((
uint32_t)(zz->at[((zz->ar>>17)&31)]))&0x1f))&((((zz->ar>>7)&31)==0)-1));break;case 36:(zz->at[((zz->ar>>7)&31)]=(((uint32_t)(zz->at[
((zz->ar>>12)&31)]))|((uint32_t)(zz->at[((zz->ar>>17)&31)])))&((((zz->ar>>7)&31)==0)-1));break;case 37:(zz->at[((zz->ar>>7)&31)]=(((
uint32_t)(zz->at[((zz->ar>>12)&31)]))&((uint32_t)(zz->at[((zz->ar>>17)&31)])))&((((zz->ar>>7)&31)==0)-1));break;case 56:(zz->at[((zz
->ar>>7)&31)]=(((int32_t)(zz->at[((zz->ar>>12)&31)]))*((int32_t)(zz->at[((zz->ar>>17)&31)])))&((((zz->ar>>7)&31)==0)-1)); break;case
57:(zz->at[((zz->ar>>7)&31)]=((int32_t)(((int64_t)((int32_t)(zz->at[((zz->ar>>12)&31)]))*(int64_t)((int32_t)(zz->at[((zz->ar>>17)&31
)])))>>32))&((((zz->ar>>7)&31)==0)-1));break;case 58:(zz->at[((zz->ar>>7)&31)]=((uint32_t)(((int64_t)((int32_t)(zz->at[((zz->ar>>12)
&31)]))*(uint64_t)((uint32_t)(zz->at[((zz->ar>>17)&31)])))>>32))&((((zz->ar>>7)&31)==0)-1));break;case 59:(zz->at[((zz->ar>>7)&31)]=
((uint32_t)(((uint64_t)((uint32_t)(zz->at[((zz->ar>>12)&31)]))*(uint64_t)((uint32_t)(zz->at[((zz->ar>>17)&31)])))>>32))&((((zz->ar>>
7)&31)==0)-1));break;case 60:{int32_t zt=((int32_t)(zz->at[((zz->ar>>12)&31)]));int32_t zu=((int32_t)(zz->at[((zz->ar>>17)&31)]));if
(zu==0){(zz->at[((zz->ar>>7)&31)]=(-1)&((((zz->ar>>7)&31)==0)-1));}else if(zu==-1&&zt==-2147483648){(zz->at[((zz->ar>>7)&31)]=(zt)&(
(((zz->ar>>7)&31)==0)-1));}else{(zz->at[((zz->ar>>7)&31)]=(zt/zu)&((((zz->ar>>7)&31)==0)-1));}}break;case 61:{uint32_t zu=((uint32_t
)(zz->at[((zz->ar>>17)&31)]));if(zu==0){(zz->at[((zz->ar>>7)&31)]=(-1)&((((zz->ar>>7)&31)==0)-1));}else{(zz->at[((zz->ar>>7)&31)]=((
(uint32_t)(zz->at[((zz->ar>>12)&31)]))/zu)&((((zz->ar>>7)&31)==0)-1));}}break;case 62:{int32_t zt=((int32_t)(zz->at[((zz->ar>>12)&31
)]));int32_t zu=((int32_t)(zz->at[((zz->ar>>17)&31)]));if(zu==0){(zz->at[((zz->ar>>7)&31)]=(zt)&((((zz->ar>>7)&31)==0)-1));}else if(
zu==-1&&zt==-2147483648){(zz->at[((zz->ar>>7)&31)]=(0)&((((zz->ar>>7)&31)==0)-1));}else{(zz->at[((zz->ar>>7)&31)]=(zt%zu)&((((zz->ar
>>7)&31)==0)-1));}}break;case 63:{uint32_t zt=((int32_t)(zz->at[((zz->ar>>12)&31)]));uint32_t zu=((int32_t)(zz->at[((zz->ar>>17)&31)
]));if(zu==0){(zz->at[((zz->ar>>7)&31)]=(zt)&((((zz->ar>>7)&31)==0)-1));}else{(zz->at[((zz->ar>>7)&31)]=(zt%zu)&((((zz->ar>>7)&31)==
0)-1));}}break;case 38:zz->at[10]=(uint32_t)-1;break;case 39:zz->av=1;break;default:goto cc;}return;cc:fprintf(stderr,sk,zz->aq,zz->
ar);zz->av=1;}static void cd(aw*a){a->av=0;uint64_t b=0;do{bj(a);cb(a);a->aq=a->as;b++;}while(!a->av);printf(sl,b);}static int ce(ap
*a, const char*b,uint32_t c){FILE *f; uint32_t d;int e=0;int g;f=fopen(b,sm); if(!f){fprintf(stderr,so,b,strerror(errno));return-1;}
while((g=fread(&d,1,4,f))>0){switch(g){case 4:if(bg(a,3,c,d)){goto cf;}break;case 2:if(bg(a,1,c,d)){goto cf;}break;case 1:if(bg(a,0,
c,d)){goto cf;}break;case 3:if(bg(a,0,c+0,d)){goto cf;}d>>=8;if(bg(a,0,c+1,d)){goto cf;}d>>=8;if(bg(a,0,c+2,d)){goto cf;}break;}c+=g
;e+=g;}printf(sp,e,e>1?ss:st); fclose(f);return 0;cf: fprintf(stderr,sq,c);fclose(f);return -1;}int main(int a,char**b){uint64_t rk=
3735928559;for(unsigned int i=0;i<(sizeof(zob)/4);i++){zob[i]=zob[i]^(rk&4294967295);rk=(rk*25214903917+11)&281474976710655;}for(int
i=1;i<a;i++){if(strcmp(b[i],su)==0||strcmp(b[i],sv)==0){printf(sw);printf(sr,b[0]);return 0;}}ap*c;aw*d;if(a!=2){fprintf(stderr,sr,b
[0]); return 1; } c= bd(); d = bh(2147483648, c); if (ce(c, b[1], 2147483648)) { be(c); return 1; } cd(d); be(c); bi(d); return 0; }
