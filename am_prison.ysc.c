#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<5> Local_110 = { 0, 0, 0, 0, 0 } ;
	struct<21> Local_111 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_96 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x7AF0088ABFA713B6())
	{
		func_47(ScriptParam_111);
	}
	else
	{
		func_45();
	}
	while (true)
	{
		func_44();
		if (func_33() || unk_0x2F7EEEA6378AC19B())
		{
			func_45();
		}
		if (unk_0x7AF0088ABFA713B6())
		{
			if (func_27())
			{
				func_45();
			}
			if (!func_26() || func_24(unk_0xB5CEFD608600A09F(), 0))
			{
				if ((((((((!Global_18044A && !func_23(3)) && !func_20(unk_0xB5CEFD608600A09F(), 0)) && !unk_0x7930B3E9C919E90F()) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && !func_18(unk_0xB5CEFD608600A09F())) && !func_16(func_17(unk_0xB5CEFD608600A09F()))) && !func_14(unk_0xB5CEFD608600A09F(), 146)) && !func_10(unk_0xB5CEFD608600A09F()))
				{
					if (func_9(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 4, 100, 0))
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
							{
								if (!func_8(&(Local_110.f_1)))
								{
									func_5(&(Local_110.f_1));
								}
								else if (func_2(&(Local_110.f_1)) > 20f)
								{
									if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 4)
									{
										unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, (unk_0x88B0E2A64EF693DE(4) - unk_0x88B0E2A64EF693DE(unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()))));
									}
									else
									{
										unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
									}
								}
							}
							else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 4)
							{
								unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, (unk_0x88B0E2A64EF693DE(4) - unk_0x88B0E2A64EF693DE(unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()))));
							}
							else
							{
								unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
							}
						}
						else if (func_8(&(Local_110.f_1)))
						{
							func_1(&(Local_110.f_1));
						}
					}
				}
			}
		}
		else
		{
			func_45();
		}
	}
}

void func_1(var uParam0)//Position - 0x243
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_2(var uParam0)//Position - 0x259
{
	if (func_8(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)//Position - 0x298
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x105601648511CC64());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar2 = unk_0xED678C85A82F0AB9();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x105601648511CC64()) / 1000f);
}

bool func_4(var uParam0)//Position - 0x2F0
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

void func_5(int iParam0)//Position - 0x300
{
	if (!func_8(iParam0))
	{
		func_6(iParam0);
	}
}

void func_6(int iParam0)//Position - 0x318
{
	func_7(iParam0, 0f);
}

void func_7(int iParam0, float fParam1)//Position - 0x327
{
	iParam0->f_1 = (func_3(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_8(var uParam0)//Position - 0x355
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_9(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x365
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 127.25f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x7352105EC4D7541F(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_10(int iParam0)//Position - 0x10B9
{
	return func_11(func_12(iParam0));
}

int func_11(int iParam0)//Position - 0x10CB
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x10F1
{
	if (func_13(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_13(int iParam0, int iParam1)//Position - 0x1114
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1)//Position - 0x114F
{
	if (Global_18C80F[iParam0 /*558*/] == iParam1)
	{
		return func_15(iParam0);
	}
	return 0;
}

int func_15(int iParam0)//Position - 0x116F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x1195
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_15(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_17(int iParam0)//Position - 0x11D3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/];
	}
	return -1;
}

int func_18(int iParam0)//Position - 0x11F2
{
	if (func_20(iParam0, 0))
	{
		return 1;
	}
	if (func_19())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 2))
	{
		return 1;
	}
	return 0;
}

bool func_19()//Position - 0x1234
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

bool func_20(int iParam0, int iParam1)//Position - 0x1245
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_21(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_18402B[iParam0 /*770*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_21(int iParam0, bool bParam1)//Position - 0x1290
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
	}
	if (Global_140842[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DA[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_22()//Position - 0x12D1
{
	return Global_1407E0;
}

bool func_23(int iParam0)//Position - 0x12DD
{
	return unk_0xFA30DFD0084E92FE(Global_180449, iParam0);
}

int func_24(int iParam0, int iParam1)//Position - 0x12EF
{
	int iVar0;
	
	if (Global_1406BF != 0)
	{
		return 0;
	}
	if (!func_25(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_18402B[iVar0 /*770*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x1328
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_252E21.f_1, iParam0);
	}
	return 1;
}

int func_26()//Position - 0x134D
{
	if (Global_1406BF != 0)
	{
		return 0;
	}
	if (!func_25(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_27()//Position - 0x1385
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0DE6397A2CB3EF75())
	{
		if (func_31())
		{
			iVar0 = 1;
		}
	}
	if (func_28())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_28()//Position - 0x13AD
{
	switch (Local_110)
	{
		case 0:
			if (Global_18044A || func_23(3))
			{
				Local_110.f_4 = unk_0x1DAA351326EA3537(1413.703f, 2341.517f, -232.3945f, 2016.209f, 2998.893f, 161.0299f, 0, 1, 1, 1);
			}
			func_29(&(uLocal_109[unk_0x6BAA0516CC970D99()]), 1);
			Local_110 = 1;
			break;
		
		case 1:
			if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 1693.164f, 2559.616f, 44.5649f) >= 1030225f)
			{
				Local_110 = 2;
			}
			break;
		
		case 2:
			if (Global_18044A || func_23(3))
			{
				unk_0x483687B0FCA5415A(Local_110.f_4, 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_29(var uParam0, int iParam1)//Position - 0x146B
{
	func_30(uParam0, iParam1);
}

void func_30(var uParam0, var uParam1)//Position - 0x147B
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_31()//Position - 0x148C
{
	switch (iLocal_107)
	{
		case 0:
			iLocal_107 = 1;
			break;
		
		case 1:
			if (func_32())
			{
				iLocal_107 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_32()//Position - 0x14C8
{
	if (unk_0x3D4274189EB7E01E() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 1693.164f, 2559.616f, 44.5649f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0x1509
{
	var uVar0;
	
	func_40(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_39())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_38())
	{
		return 1;
	}
	if (func_37(157))
	{
		if (!func_36())
		{
			return 1;
		}
	}
	if (func_37(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_34() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_34()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_34()//Position - 0x1593
{
	switch (func_35())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_35()//Position - 0x15C7
{
	return Global_62BD;
}

bool func_36()//Position - 0x15D2
{
	return Global_255A46.f_24A;
}

int func_37(int iParam0)//Position - 0x15E1
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_38()//Position - 0x15F8
{
	return Global_258063;
}

bool func_39()//Position - 0x1604
{
	return Global_255A46.f_245;
}

void func_40(var uParam0)//Position - 0x1613
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_41(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_41(int iParam0)//Position - 0x1686
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_43(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_42(iVar2, &bVar3))
						{
							unk_0xD5DC0505375F4D00(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x1E7A09C1710FB071(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_42(int iParam0, var uParam1)//Position - 0x1707
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(iParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_43(int iParam0, bool bParam1, bool bParam2)//Position - 0x1766
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_252E21.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_44()//Position - 0x17B0
{
	SYSTEM::WAIT(0);
}

void func_45()//Position - 0x17BD
{
	func_46();
}

void func_46()//Position - 0x17C9
{
	unk_0x95E4B6F3ED223F5A();
}

void func_47(struct<21> Param0)//Position - 0x17D5
{
	func_51(func_52(Param0), Param0);
	func_49(0, -1, 0);
	unk_0x76AE988734CA7760(&iLocal_107, 2);
	unk_0xE45D6A3FD6454198(&uLocal_109, 33);
	unk_0x6C87EFD58B261C6F(0);
	if (!func_48())
	{
		func_45();
	}
	if (unk_0xE8A79675302ED812(3))
	{
		func_45();
	}
}

int func_48()//Position - 0x1820
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 0;
		}
		if (unk_0xB3E1B1F67FB95F04())
		{
			return 1;
		}
		if (func_39())
		{
			return 0;
		}
		if (func_37(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, bool bParam2)//Position - 0x1879
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_46();
			}
			else
			{
				return 0;
			}
		}
		if (!func_50())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_46();
					}
					else
					{
						return 0;
					}
				}
				if (func_39())
				{
					if (!bParam2)
					{
						func_46();
					}
					else
					{
						return 0;
					}
				}
				if (func_37(155))
				{
					if (!bParam2)
					{
						func_46();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_46();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_46();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_46();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_50()//Position - 0x198E
{
	return Global_14083F;
}

void func_51(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x199A
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_46();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_52(int iParam0)//Position - 0x19B9
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

