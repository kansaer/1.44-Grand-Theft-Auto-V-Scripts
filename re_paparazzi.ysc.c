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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_51 = 0f;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<6> Local_61 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	var uLocal_74 = 15;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
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
	var uLocal_96 = 0;
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
	var uLocal_107 = 1;
	struct<18> Local_108[4];
	struct<18> Local_109[8];
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	char* sLocal_132 = NULL;
	char[] cLocal_133[8] = 0;
	char* sLocal_134 = NULL;
	char* sLocal_135 = NULL;
	int iLocal_136[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_137 = 0;
	int iLocal_138[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_139[16];
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144[3] = { 0, 0, 0 };
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	int iLocal_152[2] = { 0, 0 };
	float fLocal_153 = 0f;
	vector3 vLocal_154 = { 0f, 0f, 0f };
	vector3 vLocal_155 = { 0f, 0f, 0f };
	vector3 vLocal_156 = { 0f, 0f, 0f };
	vector3 vLocal_157 = { 0f, 0f, 0f };
	vector3 vLocal_158 = { 0f, 0f, 0f };
	vector3 vLocal_159 = { 0f, 0f, 0f };
	vector3 vLocal_160 = { 0f, 0f, 0f };
	vector3 vLocal_161[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_162[4] = { 0f, 0f, 0f, 0f };
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	char* sLocal_175[3] = { NULL, NULL, NULL };
	int iLocal_176 = 0;
	char* sLocal_177 = NULL;
	vector3 vLocal_178 = { 0f, 0f, 0f };
	vector3 vLocal_179 = { 0f, 0f, 0f };
	float fLocal_180 = 0f;
	vector3 vLocal_181 = { 0f, 0f, 0f };
	vector3 vLocal_182 = { 0f, 0f, 0f };
	float fLocal_183 = 0f;
	vector3 vLocal_184 = { 0f, 0f, 0f };
	vector3 vLocal_185 = { 0f, 0f, 0f };
	float fLocal_186 = 0f;
	vector3 vLocal_187 = { 0f, 0f, 0f };
	vector3 vLocal_188 = { 0f, 0f, 0f };
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	float fLocal_191 = 0f;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	bool bLocal_194 = 0;
	float fLocal_195 = 0f;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	bool bLocal_198 = 0;
	bool bLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	struct<2> Local_204 = { 0, 5 } ;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 5;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_44 = -1f;
	vLocal_49 = { 226.6825f, 681.0297f, 188.4987f };
	vLocal_50 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_51 = 32.0905f;
	StringCopy(&Local_61, "", 24);
	vLocal_68 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_69 = 283.0367f;
	vLocal_71 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_72 = -18.4743f;
	cLocal_133 = "REPAPAU";
	sLocal_134 = "random@escape_paparazzi@standing@";
	sLocal_135 = "random@escape_paparazzi@incar@";
	iLocal_146 = 4000;
	fLocal_150 = 0f;
	fLocal_151 = 0f;
	fLocal_153 = 0f;
	vLocal_154 = { 272.6356f, 155.5618f, 103.3306f };
	vLocal_155 = { 247.5795f, 88.7094f, 92.9859f };
	vLocal_156 = { 259.0348f, 114.0369f, 98.9984f };
	vLocal_157 = { 255.4971f, 116.8744f, 99.8162f };
	vLocal_158 = { 266.8217f, 139.7698f, 103.2269f };
	vLocal_159 = { 270.0174f, 139.1181f, 103.2195f };
	vLocal_160 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_177 = "left_";
	vLocal_178 = { 261.9341f, 126.2429f, 95.15405f };
	vLocal_179 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_180 = 16f;
	vLocal_181 = { 261.9341f, 126.2429f, 107.6541f };
	vLocal_182 = { 248.354f, 87.01792f, 92.389f };
	fLocal_183 = 16f;
	vLocal_184 = { 256.6779f, 126.573f, 99.54784f };
	vLocal_185 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_186 = 5.75f;
	vLocal_187 = { 260.242f, 127.423f, 101.65f };
	vLocal_188 = { 0f, 0f, -20f };
	vLocal_48 = { ScriptParam_204.f_1[0 /*3*/] };
	if (unk_0xE8A79675302ED812(11))
	{
		func_274();
	}
	func_273(&uLocal_74, 3);
	if (!Global_3)
	{
		if (func_231(vLocal_48, -1, 0, 0, 0))
		{
			func_228(-1);
		}
		else
		{
			unk_0x95E4B6F3ED223F5A();
		}
	}
	iLocal_126 = unk_0x1DAA351326EA3537(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_127 = unk_0x1DAA351326EA3537(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	iLocal_128 = unk_0x1DAA351326EA3537(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0x6C5F5B5F6894CCE3(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, false);
	}
	unk_0x379ACE23D404525C(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, 1);
	unk_0xD0FC9D284379BED4("WORLD_VEHICLE_DRIVE_SOLO", false);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_225(&uLocal_74);
		if (!func_224())
		{
			if (func_223())
			{
				func_274();
			}
		}
		unk_0x2E94C9549322098D("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_108)
		{
			if (unk_0x724D816EA203A79E(Local_108[iVar0 /*18*/]) && !unk_0x1D403DFADBC2DE3C(Local_108[iVar0 /*18*/], 0))
			{
				Local_108[iVar0 /*18*/].f_8 = { unk_0x541C2AEF053615BC(Local_108[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]) && !unk_0x1D403DFADBC2DE3C(Local_109[iVar0 /*18*/], 0))
			{
				Local_109[iVar0 /*18*/].f_6 = { unk_0x541C2AEF053615BC(Local_109[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vLocal_52 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_67))
		{
			vLocal_53 = { unk_0x541C2AEF053615BC(iLocal_67, true) };
		}
		if (unk_0x724D816EA203A79E(iLocal_70) && !unk_0x1D403DFADBC2DE3C(iLocal_70, 0))
		{
			vLocal_54 = { unk_0x541C2AEF053615BC(iLocal_70, true) };
		}
		if (!func_224())
		{
			if (unk_0x684B06333594F9EA())
			{
				switch (iLocal_130)
				{
					case 0:
						if (func_214())
						{
							func_204();
							iLocal_130++;
						}
						else if (func_192())
						{
							func_274();
						}
						break;
					
					case 1:
						if ((func_191() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || !unk_0xE59B7F5A03335350(iLocal_70, 0))
						{
							if (!Global_3 && !bLocal_56)
							{
								func_190();
								func_274();
							}
						}
						else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, true, 0))
						{
							func_181(1);
							iLocal_121 = func_180(iLocal_67, 0, 145);
							func_179("MAG_2_ESCAPE_PAP_GET_CAR");
							func_178(0);
						}
						break;
				}
			}
			else
			{
				func_274();
			}
		}
		else
		{
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
			switch (iLocal_45)
			{
				case 0:
					func_175();
					break;
				
				case 1:
					func_172();
					break;
				
				case 2:
					func_150();
					break;
				
				case 3:
					func_138();
					break;
				
				case 4:
					func_105();
					break;
				
				case 10:
					func_274();
					break;
				
				case 5:
					func_104();
					break;
				
				case 6:
					func_101(sLocal_132);
					break;
				
				case 7:
					func_100();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_99())
					{
						if (unk_0x724D816EA203A79E(iLocal_67))
						{
							unk_0xF845620A03C7425B(&iLocal_67);
						}
						func_75();
					}
					break;
				
				case 11:
					func_71();
					break;
			}
			if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_53, 210f, 210f, 210f, false, true, 0))
			{
				func_190();
				func_274();
			}
			if (((iLocal_45 != 5 && iLocal_45 != 6) && iLocal_45 != 10) && iLocal_45 != 7)
			{
				if (!Global_3 && !bLocal_56)
				{
					if (func_68(iLocal_67, 1, 1) || func_67())
					{
						if (iLocal_45 > 0)
						{
							func_178(5);
						}
						else
						{
							func_190();
							func_178(10);
						}
					}
					if (((iLocal_45 != 5 && iLocal_45 != 10) && iLocal_45 != 0) && iLocal_45 != 7)
					{
						if (func_63())
						{
							func_178(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_45 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_60 || func_19() != 0))
			{
				if ((!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, true, 0) && (unk_0x105601648511CC64() - iLocal_145) > 5000) && !unk_0x36CEFBE9B745A58D(Local_109[iVar1 /*18*/]))
				{
					if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_109[iVar1 /*18*/], true), vLocal_52) < (30.5f * 30.5f) && SYSTEM::VDIST2(vLocal_53, vLocal_52) > (22.5f * 22.5f))
					{
						if (func_224())
						{
							if (Local_139[4 /*10*/] != Local_109[iVar1 /*18*/])
							{
								func_18(&Local_139, 4);
								func_17(&Local_139, 4, Local_109[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_193)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_145 = unk_0x105601648511CC64();
									iLocal_193 = 1;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_145 = unk_0x105601648511CC64();
							}
						}
						else
						{
							StringCopy(&vVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&vVar2, unk_0x491B2241281A03B7(1, 13), 24);
							func_3(Local_109[iVar1 /*18*/], &vVar2, "PAPARAZZO", 24);
							iLocal_145 = unk_0x105601648511CC64();
						}
					}
				}
			}
		}
		if (iLocal_45 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()//Position - 0x85F
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		iVar0 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			iVar1 = unk_0x3187EF5798B5D209(iVar0, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar1))
			{
				if (iVar1 != unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5CAE759AE8219D20(iVar1))
					{
						if (!unk_0x1A6AA4082E241660(iVar1, unk_0xBC25C936A095B5BA()))
						{
							unk_0x56F2E1B5599188FA(iVar1, unk_0xBC25C936A095B5BA(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()//Position - 0x8CC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]))
		{
			if (unk_0x8D66276473ABD7CC(Local_109[iVar0 /*18*/]) < Local_109[iVar0 /*18*/].f_11)
			{
				if (unk_0xD9C1758D86688CEA(Local_109[iVar0 /*18*/], unk_0xBC25C936A095B5BA(), 1))
				{
					iLocal_138[iVar0] = (iLocal_138[iVar0] + (Local_109[iVar0 /*18*/].f_11 - unk_0x8D66276473ABD7CC(Local_109[iVar0 /*18*/])));
					iLocal_63 = (iLocal_63 + (Local_109[iVar0 /*18*/].f_11 - unk_0x8D66276473ABD7CC(Local_109[iVar0 /*18*/])));
					unk_0x5502708AECB47F5D(Local_109[iVar0 /*18*/]);
					if (iLocal_138[iVar0] > iLocal_137)
					{
						iLocal_137 = iLocal_138[iVar0];
					}
				}
			}
			Local_109[iVar0 /*18*/].f_11 = unk_0x8D66276473ABD7CC(Local_109[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x988
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)//Position - 0x9A1
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB93
{
	func_16(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC1 = 0;
	Global_3DC6 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_280001 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)//Position - 0xBE1
{
	Global_3DB9 = 0;
	if (Global_3DB8 == 0 || Global_3DBA == 2)
	{
		if (Global_3DB8 != 0)
		{
			if (iParam1 > Global_3DBA)
			{
				if (Global_3DBF == 0)
				{
					unk_0x1E08809A5041F85B(false);
					Global_389D.f_1 = 3;
					Global_3DB8 = 0;
					Global_3DB9 = 1;
					Global_3DED = 0;
					Global_3DB4 = 0;
					Global_3DB5 = 0;
					Global_3DC3 = 0;
					Global_3DC2 = 0;
					Global_389C = 0;
				}
				else
				{
					func_15();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_14(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_13();
		Global_3AF1 = { Global_3B96 };
		Global_3DBE = Global_3DBF;
		Global_3DC5 = Global_3DC6;
		Global_280002 = Global_280001;
		Global_3DC7 = { Global_3DD7 };
		Global_3DC0 = Global_3DC1;
		Global_4196 = Global_4197;
		Global_419E = { Global_41A4 };
		Global_4198 = Global_4199;
		Global_419A = Global_419B;
		Global_419C = Global_419D;
		Global_3C3B.f_172 = Global_4195;
		Global_3C3B.f_170 = Global_4193;
		Global_3C3B.f_171 = Global_4194;
		Global_3DB4 = Global_3DB5;
		if (Global_3DBE)
		{
			unk_0x7CB6FD92BE491AD9(&Global_93B, 20);
			unk_0x7CB6FD92BE491AD9(&Global_93C, 17);
			unk_0x7CB6FD92BE491AD9(&Global_93D, 0);
			if (bParam2)
			{
				func_11();
				if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_389D.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_387B == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11542)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_9())
			{
				return 0;
			}
			else
			{
				switch (Global_389D.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xFA30DFD0084E92FE(Global_93B, 9))
				{
					return 0;
				}
			}
			func_8();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_7();
		return 1;
	}
	if (Global_3DB8 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DBA || iParam1 == Global_3DBA)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_15();
	}
	return 0;
}

void func_7()//Position - 0xEAD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_394C[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(false);
	Global_3DB8 = 1;
}

void func_8()//Position - 0xEDD
{
	Global_3DED = Global_3DEC;
	Global_3DE7 = Global_3DE8;
	Global_3E16 = { Global_3E0A };
	Global_3E1C = { Global_3E10 };
	Global_3DEF = Global_3DEE;
	Global_3E34 = { Global_3E22 };
	Global_3E3A = { Global_3E28 };
	Global_3E40 = { Global_3E2E };
	Global_3E46 = { Global_3E4C };
	Global_68E = Global_68F;
	Global_690 = Global_691;
	Global_3DC3 = Global_3DC4;
	Global_3DC5 = Global_3DC6;
	Global_3DC7 = { Global_3DD7 };
	Global_3DBC = Global_3DBD;
	Global_41B0 = 0;
	Global_3DE9 = 0;
	Global_3DEA = 0;
	unk_0x7CB6FD92BE491AD9(&Global_93C, 16);
}

int func_9()//Position - 0xF72
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0xF99
{
	int iVar0;
	int iVar1;
	
	if (Global_11542)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_11()//Position - 0x1032
{
	if (func_12(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[0 /*29*/])
			{
				Global_389D = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[1 /*29*/])
			{
				Global_389D = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[2 /*29*/])
			{
				Global_389D = 2;
			}
			else
			{
				Global_389D = 0;
			}
		}
	}
	else
	{
		Global_389D = func_19();
		if (Global_389D == 145)
		{
			Global_389D = 3;
		}
		if (Global_11542)
		{
			Global_389D = 3;
		}
		if (Global_389D > 3)
		{
			Global_389D = 3;
		}
	}
}

bool func_12(int iParam0)//Position - 0x10D4
{
	return Global_8C41 == iParam0;
}

void func_13()//Position - 0x10E2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3AF1[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3AF1[iVar0 /*10*/].f_1), "", 24);
		Global_3AF1[iVar0 /*10*/].f_7 = 0;
		Global_3AF1[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3AF1.f_A1 = -99;
	Global_3AF1.f_A2 = { 0f, 0f, 0f };
}

bool func_14(int iParam0, int iParam1)//Position - 0x1138
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_14CC81.f_CB[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_14CC81.f_418, iParam0);
}

void func_15()//Position - 0x1173
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_389D.f_1 == 9) || Global_389C == 1)
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
		Global_389D.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(true);
		Global_3DB8 = 6;
		return;
	}
}

void func_16(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x11CA
{
	Global_3B96 = { *uParam0 };
	Global_68F = iParam1;
	StringCopy(&Global_3DFE, sParam2, 24);
	Global_4195 = iParam5;
	if (iParam3 == 0)
	{
		Global_4193 = 1;
		Global_4191 = 0;
	}
	else
	{
		Global_4193 = 0;
		Global_4191 = 1;
	}
	if (iParam4 == 0)
	{
		Global_4194 = 1;
		Global_4192 = 0;
	}
	else
	{
		Global_4194 = 0;
		Global_4192 = 1;
	}
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1220
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11542)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

void func_18(var uParam0, int iParam1)//Position - 0x12BB
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_19()//Position - 0x12D8
{
	func_20();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_20()//Position - 0x12F1
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_23(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_22(unk_0xBC25C936A095B5BA());
			if (func_21(iVar0) && (!func_12(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_21(Global_19B04.f_932.f_21B.f_10CD))
				{
					Global_19B04.f_932.f_21B.f_10CE = Global_19B04.f_932.f_21B.f_10CD;
				}
				Global_19B04.f_932.f_21B.f_10CF = iVar0;
				Global_19B04.f_932.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19B04.f_932.f_21B.f_10CD != 145)
			{
				Global_19B04.f_932.f_21B.f_10CF = Global_19B04.f_932.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19B04.f_932.f_21B.f_10CD = 145;
}

bool func_21(int iParam0)//Position - 0x13EE
{
	return iParam0 < 3;
}

int func_22(int iParam0)//Position - 0x13FA
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)//Position - 0x1437
{
	if (func_21(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24()//Position - 0x1461
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if ((unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]) && !unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/])) && !unk_0x36CEFBE9B745A58D(iLocal_67))
		{
			if (SYSTEM::VDIST2(vLocal_52, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(vLocal_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()//Position - 0x14E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_47)
	{
		case 0:
			iLocal_165 = 0;
			unk_0xF243B7A14FCFD0F4(joaat("a_m_y_genstreet_02"));
			unk_0xF243B7A14FCFD0F4(joaat("prop_pap_camera_01"));
			unk_0xF243B7A14FCFD0F4(joaat("cavalcade2"));
			unk_0xF243B7A14FCFD0F4(joaat("vader"));
			unk_0x522053D86D6E1C7A(sLocal_134);
			unk_0x522053D86D6E1C7A("random@paparazzi@pap_anims");
			if (((((unk_0xD6513D668481290A(joaat("a_m_y_genstreet_02")) && unk_0xD6513D668481290A(joaat("prop_pap_camera_01"))) && unk_0xD6513D668481290A(joaat("cavalcade2"))) && unk_0xD6513D668481290A(joaat("vader"))) && unk_0xF9E082857622D91E(sLocal_134)) && unk_0xF9E082857622D91E("random@paparazzi@pap_anims"))
			{
				vLocal_161[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				vLocal_161[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				vLocal_161[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				vLocal_161[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_162[0] = -111.1625f;
				fLocal_162[1] = 68.857f;
				fLocal_162[2] = -108.2056f;
				fLocal_162[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_108)
				{
					func_62(iVar0);
					func_60(func_61(iVar0));
					func_60(func_59(iVar0));
					iVar0++;
				}
				iLocal_163 = 0;
				func_58(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_58(func_59(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_58(func_59(2), vLocal_161[1 /*3*/], fLocal_162[1]);
				func_58(func_59(3), vLocal_161[1 /*3*/], fLocal_162[1]);
				func_57(0, vLocal_161[0 /*3*/], fLocal_162[0], 1);
				func_57(1, vLocal_161[1 /*3*/], fLocal_162[1], 0);
				unk_0x641B19E156645A92(func_56(0, 1), 265.408f, 151.2875f, 103.5673f, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(func_56(0, 1), 217.1033f);
				unk_0x641B19E156645A92(func_56(2, 1), 245.9477f, 72.661f, 89.1067f, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(func_56(2, 1), 38.6283f);
				unk_0x641B19E156645A92(func_56(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(func_56(3, 1), 272.9875f);
				unk_0xE896C0AD02364F2A(func_56(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(func_56(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(func_56(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(func_56(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(func_56(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			func_54(func_59(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_54(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_54(func_59(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0x724D816EA203A79E(Local_109[2 /*18*/].f_2))
			{
				if (!unk_0x8F6EAC9E7D6812D5(Local_109[2 /*18*/].f_2))
				{
					unk_0xDC078F87049ECECE(Local_109[2 /*18*/].f_2, true, 0);
				}
			}
			switch (iLocal_165)
			{
				case 0:
					if (!unk_0x36CEFBE9B745A58D(func_56(1, 0)))
					{
						unk_0xA4E856A8CD53B8DF(func_56(1, 0));
					}
					if (!unk_0x36CEFBE9B745A58D(func_56(1, 1)))
					{
						unk_0xA4E856A8CD53B8DF(func_56(1, 1));
					}
					if (!unk_0x724D816EA203A79E(Local_108[2 /*18*/]))
					{
						func_57(2, vLocal_161[2 /*3*/], fLocal_162[2], 0);
						if (unk_0xE59B7F5A03335350(Local_108[2 /*18*/], 0))
						{
							func_58(func_61(2), unk_0x541C2AEF053615BC(Local_108[2 /*18*/], true), 0f);
							unk_0xBD53A029D0155A42(func_56(2, 0), Local_108[2 /*18*/], -1);
						}
					}
					if (!unk_0x724D816EA203A79E(Local_108[3 /*18*/]))
					{
						func_57(3, vLocal_161[3 /*3*/], fLocal_162[3], 0);
					}
					if (!unk_0x36CEFBE9B745A58D(func_56(2, 1)))
					{
						unk_0x346129B364057FF6(func_56(2, 1), vLocal_156, 2f, -1, 1048576000, 0, 1193033728);
					}
					if (!unk_0x36CEFBE9B745A58D(func_56(3, 1)))
					{
						unk_0x346129B364057FF6(func_56(3, 1), vLocal_157, 2f, -1, 1048576000, 0, 1193033728);
					}
					if (!unk_0x724D816EA203A79E(func_56(3, 0)))
					{
						func_58(func_61(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_56)
					{
						if (!unk_0x36CEFBE9B745A58D(func_56(1, 0)))
						{
							unk_0x346129B364057FF6(func_56(1, 0), vLocal_158, 2f, 20000, 1048576000, 0, 1193033728);
						}
						if (!unk_0x36CEFBE9B745A58D(func_56(1, 1)))
						{
							unk_0x346129B364057FF6(func_56(1, 1), vLocal_159, 2f, 20000, 1048576000, 0, 1193033728);
						}
						if (!unk_0x36CEFBE9B745A58D(func_56(0, 1)))
						{
							unk_0x346129B364057FF6(func_56(0, 1), vLocal_160, 2f, 20000, 1048576000, 0, 1193033728);
						}
					}
					SYSTEM::SETTIMERB(0);
					iVar1 = 0;
					while (iVar1 < Local_109)
					{
						if (unk_0x724D816EA203A79E(Local_109[iVar1 /*18*/]))
						{
							unk_0x55662F9F262C2F9B(Local_109[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_108)
					{
						if (unk_0x724D816EA203A79E(Local_108[iVar1 /*18*/]))
						{
							unk_0x55662F9F262C2F9B(Local_108[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_165++;
					break;
				
				case 1:
					func_49();
					if ((unk_0xE59B7F5A03335350(Local_108[0 /*18*/], 0) && !unk_0x36CEFBE9B745A58D(func_56(0, 0))) && !unk_0x36CEFBE9B745A58D(func_56(0, 1)))
					{
						if (!iLocal_152[1])
						{
							iLocal_152[1] = 1;
							unk_0x509F549022512095(func_56(0, 0), Local_108[0 /*18*/], vLocal_154, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0xE59B7F5A03335350(Local_108[2 /*18*/], 0) && !unk_0x36CEFBE9B745A58D(func_56(2, 0))) && !unk_0x36CEFBE9B745A58D(func_56(2, 1)))
					{
						if (!iLocal_152[0])
						{
							unk_0x509F549022512095(func_56(2, 0), Local_108[2 /*18*/], vLocal_155, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_152[0] = 1;
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_67) && !unk_0x36CEFBE9B745A58D(iLocal_67))
					{
						func_46(iLocal_67, 6);
						if (Global_3 || bLocal_56)
						{
							if (!unk_0x36CEFBE9B745A58D(func_56(1, 0)))
							{
								if (unk_0x4DBCE270B354E123(func_56(1, 0), vLocal_158, Global_16, false, true, 0))
								{
									func_45(iLocal_67, func_61(1));
								}
							}
							if (!unk_0x36CEFBE9B745A58D(func_56(1, 1)))
							{
								if (unk_0x4DBCE270B354E123(func_56(1, 1), vLocal_159, Global_16, false, true, 0))
								{
									func_45(iLocal_67, func_59(1));
								}
							}
							if (!unk_0x36CEFBE9B745A58D(func_56(0, 1)))
							{
								if (unk_0x4DBCE270B354E123(func_56(0, 1), vLocal_159, Global_16, false, true, 0))
								{
									func_45(iLocal_67, func_59(0));
								}
							}
						}
						else
						{
							func_46(iLocal_67, func_61(1));
							func_46(iLocal_67, func_59(1));
							if (SYSTEM::TIMERB() > 1000)
							{
								func_46(iLocal_67, func_61(1));
							}
						}
					}
					if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iLocal_70, true), vLocal_68) < 9f)
					{
						if (unk_0x4DBCE270B354E123(func_56(2, 1), vLocal_156, Global_16, false, true, 0))
						{
							func_45(iLocal_67, func_59(2));
						}
						if (unk_0x4DBCE270B354E123(func_56(3, 1), vLocal_157, Global_16, false, true, 0))
						{
							func_45(iLocal_67, func_59(3));
						}
						if (unk_0x4DBCE270B354E123(func_56(0, 1), vLocal_157, Global_16, false, true, 0))
						{
							func_45(iLocal_67, func_59(0));
						}
					}
					else
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_168, 3))
						{
							unk_0xA4E856A8CD53B8DF(Local_109[func_59(3) /*18*/]);
							unk_0xF0059F27F7BB6680(&iLocal_168, 3);
						}
						if (!unk_0xFA30DFD0084E92FE(iLocal_168, 2))
						{
							unk_0xA4E856A8CD53B8DF(Local_109[func_59(2) /*18*/]);
							unk_0xF0059F27F7BB6680(&iLocal_168, 2);
						}
						if (!unk_0xFA30DFD0084E92FE(iLocal_168, 0))
						{
							unk_0xA4E856A8CD53B8DF(Local_109[func_59(0) /*18*/]);
							unk_0xF0059F27F7BB6680(&iLocal_168, 0);
						}
						if (Global_3 || bLocal_56)
						{
							func_45(iLocal_67, func_59(3));
						}
						else
						{
							func_46(iLocal_67, func_59(3));
						}
						func_46(iLocal_67, func_59(2));
						func_46(iLocal_67, func_59(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (unk_0xE59B7F5A03335350(iLocal_70, 0))
			{
				if (unk_0x8910237449BB6F79(iLocal_70) < 1f)
				{
					fLocal_153 = (fLocal_153 + unk_0x11F9F9006143871A());
				}
				else if (fLocal_153 > 0f)
				{
					fLocal_153 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_108)
			{
				if (unk_0x724D816EA203A79E(Local_108[iVar0 /*18*/]) && iLocal_45 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_163 || !unk_0x724D816EA203A79E(Local_108[0 /*18*/])) || !unk_0x724D816EA203A79E(Local_108[1 /*18*/]))) && (unk_0x105601648511CC64() - iLocal_164) > 500)
					{
						if (SYSTEM::VDIST2(vLocal_52, vLocal_68) > 400f)
						{
							if (SYSTEM::VDIST2(vLocal_52, vLocal_68) < 62500f || (unk_0x105601648511CC64() - iLocal_131) < 30000)
							{
								func_40(Local_108[iVar0 /*18*/], iLocal_70, &(Local_108[iVar0 /*18*/].f_5), &(Local_108[iVar0 /*18*/].f_F), &(Local_108[iVar0 /*18*/].f_B), &(Local_108[iVar0 /*18*/].f_E), &(Local_108[iVar0 /*18*/].f_10), Local_108[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_163 = iVar0;
								iLocal_164 = unk_0x105601648511CC64();
							}
						}
					}
					iVar2 = func_61(iVar0);
					if (!unk_0x36CEFBE9B745A58D(Local_109[iVar2 /*18*/]))
					{
						iVar3 = func_59(iVar0);
					}
					else
					{
						iVar3 = func_61(iVar0);
					}
					switch (Local_108[iVar0 /*18*/].f_11)
					{
						case 0:
							if (unk_0xE59B7F5A03335350(Local_108[iVar0 /*18*/], 0))
							{
								if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_108[iVar0 /*18*/], 0))
								{
									if (!unk_0x36CEFBE9B745A58D(Local_109[iVar2 /*18*/]))
									{
										if (!unk_0x62F3A07C43FFB568(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0))
										{
											if (unk_0xF4FCC3C1048FF2AB(Local_109[iVar2 /*18*/], -1794415470) != 1 && unk_0x1AAF0C23233C57AF(Local_108[iVar0 /*18*/], -1, 0))
											{
												unk_0xD179FA0466FA4FE3(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x36CEFBE9B745A58D(Local_109[iVar3 /*18*/]))
										{
											if (!unk_0x62F3A07C43FFB568(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))
											{
												if (unk_0xF4FCC3C1048FF2AB(Local_109[iVar3 /*18*/], -1794415470) != 1 && unk_0x1AAF0C23233C57AF(Local_108[iVar0 /*18*/], 0, 0))
												{
													unk_0xD179FA0466FA4FE3(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x36CEFBE9B745A58D(Local_109[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x36CEFBE9B745A58D(Local_109[iVar3 /*18*/])))
										{
											if ((unk_0x62F3A07C43FFB568(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0x62F3A07C43FFB568(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))) && unk_0xE59B7F5A03335350(iLocal_70, 0))
											{
												if (unk_0xF4FCC3C1048FF2AB(Local_109[iVar2 /*18*/], -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(Local_109[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x91629AC1E1F78419(Local_109[iVar2 /*18*/], 3, false);
													unk_0x91629AC1E1F78419(Local_109[iVar2 /*18*/], 1, true);
													unk_0x91629AC1E1F78419(Local_109[iVar2 /*18*/], 2, false);
													if (iVar0 == 0)
													{
														unk_0x488EB206498BC561(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0x488EB206498BC561(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0x488EB206498BC561(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0x488EB206498BC561(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0xE36D78F8D1781255(Local_109[iVar2 /*18*/], func_39((3f * unk_0xF0F2FC9DE291567F(vLocal_54, Local_108[iVar0 /*18*/].f_8, true)), 50f, 120f));
											}
										}
									}
									if (fLocal_153 > 3f && SYSTEM::VDIST(Local_108[iVar0 /*18*/].f_8, vLocal_54) < 10f)
									{
										Local_108[iVar0 /*18*/].f_11 = 1;
									}
								}
							}
							else
							{
								if (!unk_0x36CEFBE9B745A58D(Local_109[iVar2 /*18*/]))
								{
									if (!unk_0x889DA6CE8E4DB344(Local_109[iVar2 /*18*/]))
									{
										unk_0xABA7AE40608505F2(Local_109[iVar2 /*18*/], 2, false);
										unk_0x5558ED6D4A2DEC93(Local_109[iVar2 /*18*/], unk_0xBC25C936A095B5BA(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x36CEFBE9B745A58D(Local_109[iVar3 /*18*/]))
									{
										if (!unk_0x889DA6CE8E4DB344(Local_109[iVar3 /*18*/]))
										{
											unk_0xABA7AE40608505F2(Local_109[iVar3 /*18*/], 2, false);
											unk_0x5558ED6D4A2DEC93(Local_109[iVar3 /*18*/], unk_0xBC25C936A095B5BA(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x5237AF95232D78C5(Local_109[iVar2 /*18*/], 0))
							{
								unk_0xA3981DED4FC2E56E(Local_109[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_67, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x36CEFBE9B745A58D(Local_109[iVar3 /*18*/]))
								{
									if (unk_0x5237AF95232D78C5(Local_109[iVar3 /*18*/], 0))
									{
										unk_0xA3981DED4FC2E56E(Local_109[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_67, iVar3);
									}
								}
							}
							if (unk_0xE59B7F5A03335350(Local_108[iVar0 /*18*/], 0))
							{
								if (SYSTEM::VDIST(Local_108[iVar0 /*18*/].f_8, vLocal_54) > 15f)
								{
									Local_108[iVar0 /*18*/].f_11 = 0;
								}
							}
							break;
					}
					if ((!unk_0x36CEFBE9B745A58D(Local_109[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x36CEFBE9B745A58D(Local_109[iVar3 /*18*/]))) && unk_0xE59B7F5A03335350(Local_108[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0x41A5D6415E2CC10E(Local_109[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0x41A5D6415E2CC10E(Local_109[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0x41A5D6415E2CC10E(Local_108[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && SYSTEM::VDIST(vLocal_52, Local_108[iVar0 /*18*/].f_8) > 25f) && SYSTEM::VDIST(vLocal_52, Local_109[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0x62F3A07C43FFB568(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0))
							{
								unk_0xBD53A029D0155A42(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x62F3A07C43FFB568(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))
								{
									unk_0xBD53A029D0155A42(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_167)
			{
				iVar0 = 0;
				while (iVar0 < Local_108)
				{
					iVar5 = func_61(iVar0);
					if (!unk_0x36CEFBE9B745A58D(Local_109[iVar5 /*18*/]))
					{
						iVar6 = func_59(iVar0);
					}
					else
					{
						iVar6 = func_61(iVar0);
					}
					if (unk_0xE59B7F5A03335350(Local_108[iVar0 /*18*/], 0))
					{
						if (!unk_0x36CEFBE9B745A58D(Local_109[iVar5 /*18*/]))
						{
							if (!unk_0x62F3A07C43FFB568(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0))
							{
								if (unk_0xF4FCC3C1048FF2AB(Local_109[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0xD179FA0466FA4FE3(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x36CEFBE9B745A58D(Local_109[iVar6 /*18*/]))
							{
								if (!unk_0x62F3A07C43FFB568(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(Local_109[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0xD179FA0466FA4FE3(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x36CEFBE9B745A58D(Local_109[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x36CEFBE9B745A58D(Local_109[iVar6 /*18*/])))
							{
								if ((unk_0x62F3A07C43FFB568(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0x62F3A07C43FFB568(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0))) && unk_0xE59B7F5A03335350(iLocal_70, 0))
								{
									fVar7 = func_39((70f - (SYSTEM::TO_FLOAT((unk_0x105601648511CC64() - iLocal_66)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x105601648511CC64() - iLocal_66) > 4000)
									{
										unk_0x85B293AC970558EE(Local_109[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_108)
										{
											if ((unk_0xE59B7F5A03335350(Local_108[iVar8 /*18*/], 0) && !unk_0x36CEFBE9B745A58D(func_56(iVar8, 0))) && unk_0x62F3A07C43FFB568(func_56(iVar8, 0), Local_108[iVar8 /*18*/], 0))
											{
												unk_0xA4E856A8CD53B8DF(func_56(iVar8, 0));
												unk_0x488EB206498BC561(func_56(iVar8, 0), Local_108[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_167 = 1;
									}
									else if (unk_0xF4FCC3C1048FF2AB(Local_109[iVar5 /*18*/], -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(Local_109[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x91629AC1E1F78419(Local_109[iVar5 /*18*/], 3, false);
										unk_0x91629AC1E1F78419(Local_109[iVar5 /*18*/], 1, true);
										unk_0x91629AC1E1F78419(Local_109[iVar5 /*18*/], 2, false);
										if (iVar0 == 0)
										{
											unk_0x488EB206498BC561(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0x488EB206498BC561(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0x488EB206498BC561(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0x488EB206498BC561(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x36CEFBE9B745A58D(Local_109[iVar5 /*18*/]))
						{
							if (!unk_0x889DA6CE8E4DB344(Local_109[iVar5 /*18*/]))
							{
								unk_0xABA7AE40608505F2(Local_109[iVar5 /*18*/], 2, false);
								unk_0x5558ED6D4A2DEC93(Local_109[iVar5 /*18*/], unk_0xBC25C936A095B5BA(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x36CEFBE9B745A58D(Local_109[iVar6 /*18*/]))
							{
								if (!unk_0x889DA6CE8E4DB344(Local_109[iVar6 /*18*/]))
								{
									unk_0xABA7AE40608505F2(Local_109[iVar6 /*18*/], 2, false);
									unk_0x5558ED6D4A2DEC93(Local_109[iVar6 /*18*/], unk_0xBC25C936A095B5BA(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_166, 10f))
				{
					func_37(iLocal_166);
				}
				iLocal_166++;
				if (iLocal_166 > 3)
				{
					iLocal_166 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_166, 1125515264))
			{
				func_37(iLocal_166);
			}
			iLocal_166++;
			if (iLocal_166 > 3)
			{
				iLocal_166 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]) && !unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]))
		{
			if (iLocal_47 > 1)
			{
				if (!unk_0xF1734B55490E9045(sLocal_134))
				{
					func_28(iVar0);
					if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/].f_2) && unk_0xE7E55F7532DEE345(Local_109[iVar0 /*18*/].f_2))
					{
						if (!unk_0x5237AF95232D78C5(Local_109[iVar0 /*18*/], 0))
						{
							if (unk_0x8F6EAC9E7D6812D5(Local_109[iVar0 /*18*/].f_2))
							{
								if (unk_0x69871CAEBDD20966(Local_109[iVar0 /*18*/]))
								{
									unk_0xDC078F87049ECECE(Local_109[iVar0 /*18*/].f_2, false, 0);
								}
							}
							else if (!unk_0x69871CAEBDD20966(Local_109[iVar0 /*18*/]))
							{
								unk_0xDC078F87049ECECE(Local_109[iVar0 /*18*/].f_2, true, 0);
							}
							if (!unk_0x41A5D6415E2CC10E(Local_109[iVar0 /*18*/]))
							{
								if (!unk_0x96044E39418AAF17(Local_109[iVar0 /*18*/], sLocal_134, func_27(iVar0), 3))
								{
									if (!Local_109[iVar0 /*18*/].f_B)
									{
										if (!unk_0x96044E39418AAF17(Local_109[iVar0 /*18*/], sLocal_134, "grip", 3))
										{
											unk_0xE896C0AD02364F2A(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_109[iVar0 /*18*/].f_B = 1;
										}
									}
								}
								else if (Local_109[iVar0 /*18*/].f_B)
								{
									unk_0xE896C0AD02364F2A(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_109[iVar0 /*18*/].f_B = 0;
								}
							}
							if (!Local_109[iVar0 /*18*/].f_A)
							{
								unk_0xF632E62AC7874CD3(sLocal_134);
								if (unk_0x3114757F155123AF(sLocal_134))
								{
									unk_0x806480CBE8DA756E(Local_109[iVar0 /*18*/], sLocal_134);
									Local_109[iVar0 /*18*/].f_A = 1;
								}
							}
						}
						else
						{
							if (Local_109[iVar0 /*18*/].f_B)
							{
								unk_0xE896C0AD02364F2A(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_109[iVar0 /*18*/].f_B = 0;
							}
							if (Local_109[iVar0 /*18*/].f_A)
							{
								unk_0x47319B0052B870E0(Local_109[iVar0 /*18*/]);
								Local_109[iVar0 /*18*/].f_A = 0;
							}
						}
						if (unk_0xCBBE5AFE2CD2E9B6(Local_109[iVar0 /*18*/]) && func_26(Local_109[iVar0 /*18*/], unk_0x9FE9D386222EEE47(Local_109[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0x8F6EAC9E7D6812D5(Local_109[iVar0 /*18*/].f_2))
							{
								unk_0xDC078F87049ECECE(Local_109[iVar0 /*18*/].f_2, false, 0);
							}
						}
						else if (!unk_0x8F6EAC9E7D6812D5(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xDC078F87049ECECE(Local_109[iVar0 /*18*/].f_2, true, 0);
						}
					}
					else
					{
						if (Local_109[iVar0 /*18*/].f_B)
						{
							unk_0xE896C0AD02364F2A(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_109[iVar0 /*18*/].f_B = 0;
						}
						if (Local_109[iVar0 /*18*/].f_A)
						{
							unk_0x47319B0052B870E0(Local_109[iVar0 /*18*/]);
							Local_109[iVar0 /*18*/].f_A = 0;
						}
					}
				}
			}
			if (iLocal_45 != 7)
			{
				if (unk_0xA4813477CC5DD00F(Local_109[iVar0 /*18*/]) && unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()))
				{
					func_178(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_45 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_108)
		{
			if (unk_0x724D816EA203A79E(Local_108[iVar0 /*18*/]))
			{
				if (unk_0xE59B7F5A03335350(Local_108[iVar0 /*18*/], 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_108[iVar0 /*18*/], 0))
					{
						func_178(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)//Position - 0x2BCB
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
		{
			if (unk_0x3187EF5798B5D209(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_27(int iParam0)//Position - 0x2C3D
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_28(int iParam0)//Position - 0x2CB3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE(Local_109[iParam0 /*18*/].f_F, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_136);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0x96044E39418AAF17(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0), 3))
				{
					if (unk_0x4A3B2CF8BADDD74E(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0)) > 0.9f)
					{
						unk_0x7CB6FD92BE491AD9(&(Local_109[iParam0 /*18*/].f_F), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0x96044E39418AAF17(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[(iVar3 - iVar1)], 3))
				{
					if (unk_0x4A3B2CF8BADDD74E(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0x7CB6FD92BE491AD9(&(Local_109[iParam0 /*18*/].f_F), iVar0);
					}
				}
			}
			else if (!unk_0x96044E39418AAF17(Local_109[iParam0 /*18*/], sLocal_134, "grip", 3))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_109[iParam0 /*18*/].f_F), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()//Position - 0x2DB0
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_67))
	{
		iVar0 = func_59(iLocal_149);
		if (((unk_0x724D816EA203A79E(Local_108[iLocal_149 /*18*/]) && unk_0xE59B7F5A03335350(Local_108[iLocal_149 /*18*/], 0)) && unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/])) && !unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]))
		{
			if (unk_0x5E87CB0495C97732(Local_108[iLocal_149 /*18*/], joaat("cavalcade2")))
			{
				if (SYSTEM::VDIST2(Local_109[iVar0 /*18*/].f_6, vLocal_53) < SYSTEM::POW(30f, 2f) && unk_0x3187EF5798B5D209(Local_108[iLocal_149 /*18*/], 0, 0) == Local_109[iVar0 /*18*/])
				{
					if (!Local_109[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0x105601648511CC64() - Local_109[iVar0 /*18*/].f_D) > 1000)
					{
						if (!unk_0x96044E39418AAF17(Local_109[iVar0 /*18*/], sLocal_135, "base", 3))
						{
							unk_0xE896C0AD02364F2A(Local_109[iVar0 /*18*/], sLocal_135, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_109[iVar0 /*18*/].f_9)
			{
				if (SYSTEM::VDIST2(Local_109[iVar0 /*18*/].f_6, vLocal_53) < SYSTEM::POW(30f, 2f) && unk_0x3187EF5798B5D209(Local_108[iLocal_149 /*18*/], 0, 0) == Local_109[iVar0 /*18*/])
				{
					unk_0xCC67DC79F8AD9D40(Local_109[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_67, 1.57f, 0.25f);
					Local_109[iVar0 /*18*/].f_9 = 1;
					Local_109[iVar0 /*18*/].f_D = unk_0x105601648511CC64();
				}
			}
			else if (Local_109[iVar0 /*18*/].f_9)
			{
				if ((unk_0x105601648511CC64() - Local_109[iVar0 /*18*/].f_D) > 2000)
				{
					Local_109[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_149++;
		if (iLocal_149 >= Local_108)
		{
			iLocal_149 = 0;
		}
	}
}

void func_30(int iParam0)//Position - 0x2F8E
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!unk_0x36CEFBE9B745A58D(Local_109[iParam0 /*18*/]) && !unk_0x36CEFBE9B745A58D(iLocal_67))
	{
		iVar0 = 15;
		vVar1 = { vLocal_53 - Local_109[iParam0 /*18*/].f_6 };
		vVar2 = { unk_0xF90427F311003E57(Local_109[iParam0 /*18*/]) };
		fVar3 = func_34(vVar2, vVar1);
		if (unk_0x357058E632979E65(fVar3) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar3 >= 10f && fVar3 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar3 >= 60f && fVar3 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar3 <= -10f && fVar3 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar3 < -60f && fVar3 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)//Position - 0x307E
{
	if (iParam1 < 15)
	{
		if (!unk_0xFA30DFD0084E92FE(Local_109[iParam0 /*18*/].f_F, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0xE896C0AD02364F2A(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0xE896C0AD02364F2A(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0xE896C0AD02364F2A(Local_109[iParam0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_109[iParam0 /*18*/].f_F = 0;
			unk_0xF0059F27F7BB6680(&(Local_109[iParam0 /*18*/].f_F), iParam1);
		}
	}
}

int func_32(int iParam0)//Position - 0x3135
{
	return (iParam0 - 5);
}

bool func_33(int iParam0)//Position - 0x3141
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_136));
}

float func_34(vector3 vParam0, vector3 vParam1)//Position - 0x315E
{
	float fVar0;
	
	vParam0 = { func_35(vParam0) };
	vParam1 = { func_35(vParam1) };
	fVar0 = (unk_0xE8CFCB6B2165523B(vParam1.y, vParam1.x) - unk_0xE8CFCB6B2165523B(vParam0.y, vParam0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_35(vector3 vParam0)//Position - 0x31C4
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

bool func_36(int iParam0)//Position - 0x3203
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0xF1734B55490E9045(sLocal_135))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0xFA30DFD0084E92FE(Local_109[iParam0 /*18*/].f_F, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_37(int iParam0)//Position - 0x3248
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(Local_108[iParam0 /*18*/]) && unk_0x41A5D6415E2CC10E(Local_108[iParam0 /*18*/]))
	{
		unk_0xCF6040807CC0E4A5(&(Local_108[iParam0 /*18*/]));
	}
	if (unk_0x2DA8CA50A72528FB(Local_108[iParam0 /*18*/].f_1))
	{
		unk_0x07B8ECB35A4ED3AC(&(Local_108[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_59(iParam0);
		}
		else
		{
			iVar1 = func_61(iParam0);
		}
		if (unk_0x724D816EA203A79E(Local_109[iVar1 /*18*/]) && unk_0x41A5D6415E2CC10E(Local_109[iVar1 /*18*/]))
		{
			if (unk_0x724D816EA203A79E(Local_109[iVar1 /*18*/]))
			{
				unk_0xA35241BCE4C1A24B(&(Local_109[iVar1 /*18*/].f_2));
			}
			if (unk_0x2DA8CA50A72528FB(Local_109[iVar1 /*18*/].f_1))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_109[iVar1 /*18*/].f_1));
			}
			unk_0xF845620A03C7425B(&(Local_109[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)//Position - 0x3316
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x724D816EA203A79E(Local_108[iParam0 /*18*/]))
	{
		if (unk_0xE59B7F5A03335350(Local_108[iParam0 /*18*/], 0))
		{
			if (SYSTEM::VDIST2(vLocal_52, Local_108[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0x41A5D6415E2CC10E(Local_108[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x724D816EA203A79E(func_56(iParam0, 0)))
	{
		if (!unk_0x36CEFBE9B745A58D(func_56(iParam0, 0)))
		{
			if (SYSTEM::VDIST2(vLocal_52, Local_109[func_61(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x41A5D6415E2CC10E(func_56(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x724D816EA203A79E(func_56(iParam0, 1)))
	{
		if (!unk_0x36CEFBE9B745A58D(func_56(iParam0, 1)))
		{
			if (SYSTEM::VDIST2(vLocal_52, Local_109[func_59(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x41A5D6415E2CC10E(func_56(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_39(float fParam0, float fParam1, float fParam2)//Position - 0x340F
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)//Position - 0x3436
{
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (((((unk_0x724D816EA203A79E(iParam1) && iParam0 != iParam1) && !unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iParam1))) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(iParam1))) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iParam1))) && !unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam1)))
		{
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam1, true), *uParam4, true) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_119, unk_0x541C2AEF053615BC(iParam1, true), unk_0xD7490CDEF40F3DA2(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0x89D97EB4FAE4A574(*uParam2, *uParam3, vParam7) };
					*uParam4 = { unk_0x541C2AEF053615BC(iParam1, true) };
					*uParam5 = unk_0x349C94FFF43E2979(iParam1);
				}
			}
			if (!unk_0x41A5D6415E2CC10E(iParam0))
			{
				*uParam6 = unk_0x105601648511CC64();
			}
			else if ((unk_0x105601648511CC64() - *uParam6) > iParam8)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam9 && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam1, true), *uParam2, true) > 20f) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0x33CC9445B2DF9387(*uParam2, 6f))
						{
							unk_0xA0C0B32E74BE8DB7(*uParam2, 6f, 0);
							unk_0xEDAD35A0D81ED3FB(*uParam2, 6f, 0, 0, 0, 0, false, 0);
							unk_0x641B19E156645A92(iParam0, *uParam2, 1, false, 0, 1);
							unk_0x019CE76D5286C95C(iParam0, *uParam3);
							unk_0xF0A40F19AAB79E88(iParam0, 1084227584);
							unk_0xA4DFFFD5B234240D(iParam0, func_39((unk_0x8910237449BB6F79(iParam1) + 10f), 10f, 60f));
							unk_0x2D655AA68FA1736B(iParam0, true, true, 0);
							*uParam6 = unk_0x105601648511CC64();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x105601648511CC64();
		}
	}
}

int func_41(vector3 vParam0)//Position - 0x3606
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_42(int iParam0, int iParam1, bool bParam2)//Position - 0x3630
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, false) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vVar1, bParam2);
}

int func_43(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam4)//Position - 0x368E
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	
	if (unk_0x724D816EA203A79E(iParam2))
	{
		unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &vVar3, &vVar4);
		unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam1), &vVar5, &uVar6);
		fVar7 = unk_0x357058E632979E65((vVar4.z - vVar3.z));
		fVar8 = unk_0x357058E632979E65((vVar4.x - vVar3.x));
		fVar9 = unk_0x357058E632979E65((vVar4.y - vVar3.y));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - unk_0x357058E632979E65(vVar3.z));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - unk_0x357058E632979E65(vVar3.x));
		}
		vVar12.z = (vVar12.z + (vVar5.z - vVar3.z));
		unk_0x641B19E156645A92(iParam2, vParam3, 1, false, 0, 1);
		unk_0x784C605D172817C8(iParam2, vParam4, 2, 1);
		vVar1 = { unk_0xA4455714F3DCE207(iParam2, Vector((fVar11 * 1.25f), ((fVar9 / 2f) - (fVar10 * 0.75f)), 0f) + vVar12) };
		vVar2 = { unk_0xA4455714F3DCE207(iParam2, Vector((fVar11 * 1.25f), ((-fVar9 / 2f) + (fVar10 * 0.75f)), 0f) + vVar12) };
		iVar17 = unk_0xEDB5D06AC6E2D672(vVar2, vVar1, fVar10, 19, unk_0xBC25C936A095B5BA(), 4);
		if (unk_0xB0695CD48A28A3A9(iVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_44()//Position - 0x37C4
{
	bool bVar0;
	
	if ((unk_0x105601648511CC64() - iLocal_148) > 100)
	{
		if ((unk_0x105601648511CC64() - Local_109[iLocal_147 /*18*/].f_C) > 500)
		{
			if (unk_0x724D816EA203A79E(Local_109[iLocal_147 /*18*/]) && !unk_0x36CEFBE9B745A58D(Local_109[iLocal_147 /*18*/]))
			{
				bVar0 = true;
				if (!Local_109[iLocal_147 /*18*/].f_9 && unk_0x5237AF95232D78C5(Local_109[iLocal_147 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x96044E39418AAF17(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147), 3) && unk_0x4A3B2CF8BADDD74E(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147)) > 0.5f) && unk_0x4A3B2CF8BADDD74E(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147)) < 0.75f) || Local_109[iLocal_147 /*18*/].f_9)
					{
						unk_0xF3E9344C2BE59F6E("scr_rcpap1_camera", Local_109[iLocal_147 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_147 % 3) == 0)
						{
							unk_0x10B5C0C7337B8420(-1, "SHUTTER_FLASH", unk_0x541C2AEF053615BC(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_147 % 3) == 1)
						{
							unk_0x10B5C0C7337B8420(-1, "SHUTTER", unk_0x541C2AEF053615BC(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0x10B5C0C7337B8420(-1, "FLASH", unk_0x541C2AEF053615BC(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_109[iLocal_147 /*18*/].f_C = unk_0x105601648511CC64();
					}
					iLocal_148 = unk_0x105601648511CC64();
				}
			}
			iLocal_147++;
			if (iLocal_147 >= Local_109)
			{
				iLocal_147 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)//Position - 0x3967
{
	if (!unk_0x36CEFBE9B745A58D(Local_109[iParam1 /*18*/]) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0xC5B8A5F778E321DD(Local_109[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0xF4FCC3C1048FF2AB(Local_109[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0x85DB484A637CEAB9(Local_109[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0x105601648511CC64() - Local_109[iParam1 /*18*/].f_D) > 2000)
		{
			if (!unk_0x96044E39418AAF17(Local_109[iParam1 /*18*/], sLocal_134, func_27(iParam1), 3))
			{
				unk_0xE896C0AD02364F2A(Local_109[iParam1 /*18*/], sLocal_134, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_109[iParam1 /*18*/].f_D = unk_0x105601648511CC64();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)//Position - 0x3A17
{
	vector3 vVar0;
	
	if (!unk_0x36CEFBE9B745A58D(Local_109[iParam1 /*18*/]) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		vVar0 = { unk_0xA4455714F3DCE207(iParam0, func_48(iParam1)) };
		switch (Local_109[iParam1 /*18*/].f_10)
		{
			case 0:
				func_47(vVar0, iParam1, iParam0);
				Local_109[iParam1 /*18*/].f_10++;
				break;
			
			case 1:
				if (unk_0xF4FCC3C1048FF2AB(Local_109[iParam1 /*18*/], 713668775) != 1 || SYSTEM::VDIST(vVar0, Local_109[iParam1 /*18*/].f_6) > 5f)
				{
					Local_109[iParam1 /*18*/].f_10++;
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(vVar0, Local_109[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(vVar0, iParam1, iParam0);
					Local_109[iParam1 /*18*/].f_10++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (SYSTEM::VDIST2(vVar0, Local_109[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(vVar0, iParam1, iParam0);
				}
				if (unk_0xF4FCC3C1048FF2AB(Local_109[iParam1 /*18*/], 713668775) != 1)
				{
					Local_109[iParam1 /*18*/].f_10 = (Local_109[iParam1 /*18*/].f_10 - 1);
				}
				break;
			}
	}
}

void func_47(vector3 vParam0, int iParam1, int iParam2)//Position - 0x3B68
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { func_35(unk_0x541C2AEF053615BC(iParam2, true) - vParam0) };
	fVar1 = unk_0xFDC254CE02DB0919(vVar0.x, vVar0.y);
	Local_109[iParam1 /*18*/].f_3 = { vParam0 };
	unk_0xA4E856A8CD53B8DF(Local_109[iParam1 /*18*/]);
	if (SYSTEM::VDIST(vParam0, Local_109[iParam1 /*18*/].f_6) < 2f)
	{
		unk_0x346129B364057FF6(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 1f, -1, 0.5f, 512, fVar1);
	}
	else
	{
		unk_0x346129B364057FF6(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 2f, -1, 0.5f, 512, fVar1);
	}
}

Vector3 func_48(int iParam0)//Position - 0x3C02
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49()//Position - 0x3CEF
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x2DA8CA50A72528FB(Local_109[iVar0 /*18*/].f_1))
		{
			if (unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_109[iVar0 /*18*/].f_1));
			}
			else if (unk_0x5237AF95232D78C5(Local_109[iVar0 /*18*/], 0))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_109[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]) && !unk_0x5237AF95232D78C5(Local_109[iVar0 /*18*/], 0))
		{
			Local_109[iVar0 /*18*/].f_1 = func_180(Local_109[iVar0 /*18*/], 1, 145);
			unk_0x436D0272182E484D(Local_109[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (unk_0xE59B7F5A03335350(Local_108[iVar0 /*18*/], 0))
		{
			if (unk_0x2DA8CA50A72528FB(Local_108[iVar0 /*18*/].f_1))
			{
				vVar1 = { unk_0x5DC00ADB7E2FD7C2(Local_108[iVar0 /*18*/].f_1) };
				vVar2 = { Local_108[iVar0 /*18*/].f_8 };
				vVar1.x = (vVar1.x + ((vVar2.x - vVar1.x) / 10f));
				vVar1.y = (vVar1.y + ((vVar2.y - vVar1.y) / 10f));
				vVar1.z = (vVar1.z + ((vVar2.z - vVar1.z) / 10f));
				unk_0x1423825E528B4DE1(Local_108[iVar0 /*18*/].f_1, vVar1);
				if (func_52(Local_108[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_108[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_108[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
			{
				Local_108[iVar0 /*18*/].f_1 = func_50(Local_108[iVar0 /*18*/].f_8, 0);
				unk_0x0D5352939CC40C16(Local_108[iVar0 /*18*/].f_1, 1);
				unk_0x436D0272182E484D(Local_108[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0x12DB69036F6569F7(Local_108[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0x2DA8CA50A72528FB(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0x07B8ECB35A4ED3AC(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

int func_50(vector3 vParam0, bool bParam1)//Position - 0x3ECC
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_51(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)//Position - 0x3EF8
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x3F0F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x524ABB0435146845(iParam0) + 1;
	if (iParam4 || !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_53(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x724D816EA203A79E(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xBC25C936A095B5BA())
				{
				}
				else if (iParam2 && unk_0x15DBD981998D4FE1(iVar2))
				{
					if (unk_0x904E94842BB9E173(unk_0x5363B43856FA7779(iVar2)) == 0)
					{
						if (!bParam5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x36CEFBE9B745A58D(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_53(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3FC2
{
	int iVar0;
	
	if (!unk_0x1AAF0C23233C57AF(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x724D816EA203A79E(iVar0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, iParam1);
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iVar0, 451360105) == 1 || unk_0xF4FCC3C1048FF2AB(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(iParam0, false), unk_0x541C2AEF053615BC(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_54(int iParam0, vector3 vParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0x405E
{
	if (!unk_0x36CEFBE9B745A58D(Local_109[iParam0 /*18*/]))
	{
		if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(Local_109[iParam0 /*18*/], true), vParam1) > 1.5f)
		{
			if (unk_0xF4FCC3C1048FF2AB(Local_109[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0x346129B364057FF6(Local_109[iParam0 /*18*/], vParam1, 2f, -1, 0.25f, 0, fParam2);
			}
		}
		else if (unk_0x357058E632979E65((func_55(unk_0x349C94FFF43E2979(Local_109[iParam0 /*18*/])) - func_55(fParam2))) > 10f)
		{
			if (unk_0xF4FCC3C1048FF2AB(Local_109[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0xC0FDCDB0DF739C50(Local_109[iParam0 /*18*/], fParam2, 0);
			}
		}
		else
		{
			switch (Local_109[iParam0 /*18*/].f_10)
			{
				case 0:
					if (unk_0xF1734B55490E9045(sParam5))
					{
						if (!unk_0x96044E39418AAF17(Local_109[iParam0 /*18*/], sParam3, sParam4, 3))
						{
							unk_0xE896C0AD02364F2A(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0x96044E39418AAF17(Local_109[iParam0 /*18*/], sParam3, sParam4, 3))
					{
						unk_0xE896C0AD02364F2A(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x4A3B2CF8BADDD74E(Local_109[iParam0 /*18*/], sParam3, sParam4) > 0.99f)
					{
						unk_0xE896C0AD02364F2A(Local_109[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_109[iParam0 /*18*/].f_10++;
					}
					break;
				
				case 1:
					if (!unk_0x96044E39418AAF17(Local_109[iParam0 /*18*/], sParam3, sParam5, 3))
					{
						unk_0xE896C0AD02364F2A(Local_109[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x4A3B2CF8BADDD74E(Local_109[iParam0 /*18*/], sParam3, sParam5) > 0.99f)
					{
						unk_0xE896C0AD02364F2A(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_109[iParam0 /*18*/].f_10 = 0;
					}
					break;
				}
			}
	}
}

float func_55(float fParam0)//Position - 0x4238
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_56(int iParam0, int iParam1)//Position - 0x426C
{
	if (iParam1 == 0)
	{
		return Local_109[func_61(iParam0) /*18*/];
	}
	return Local_109[func_59(iParam0) /*18*/];
}

void func_57(int iParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x4294
{
	if ((iParam0 % 2) == 1)
	{
		Local_108[iParam0 /*18*/] = unk_0x61C05BF08A1E0EFE(joaat("vader"), vParam1, fParam2, true, true, false);
	}
	else
	{
		Local_108[iParam0 /*18*/] = unk_0x61C05BF08A1E0EFE(joaat("cavalcade2"), vParam1, fParam2, true, true, false);
		unk_0x6012A6A4F2950585(Local_108[iParam0 /*18*/], 0);
	}
	unk_0xF0A40F19AAB79E88(Local_108[iParam0 /*18*/], 1084227584);
	unk_0xDB35A2F9333ABEC5(Local_108[iParam0 /*18*/], true);
	if (bParam3)
	{
		if (!unk_0x724D816EA203A79E(func_56(iParam0, 0)))
		{
			func_58(func_61(iParam0), vParam1, fParam2);
		}
		if (!unk_0x724D816EA203A79E(func_56(iParam0, 1)))
		{
			func_58(func_59(iParam0), vParam1, fParam2);
		}
		if (!unk_0x36CEFBE9B745A58D(func_56(iParam0, 0)) && unk_0xE59B7F5A03335350(Local_108[iParam0 /*18*/], 0))
		{
			unk_0xBD53A029D0155A42(func_56(iParam0, 0), Local_108[iParam0 /*18*/], -1);
		}
		if (!unk_0x36CEFBE9B745A58D(func_56(iParam0, 1)) && unk_0xE59B7F5A03335350(Local_108[iParam0 /*18*/], 0))
		{
			unk_0xBD53A029D0155A42(func_56(iParam0, 1), Local_108[iParam0 /*18*/], 0);
		}
		unk_0x2D655AA68FA1736B(Local_108[iParam0 /*18*/], true, true, 0);
	}
}

void func_58(int iParam0, vector3 vParam1, float fParam2)//Position - 0x43AF
{
	Local_109[iParam0 /*18*/] = unk_0x01B3635C3E8EDD81(26, joaat("a_m_y_genstreet_02"), vParam1, fParam2, 1, true);
	unk_0x91629AC1E1F78419(Local_109[iParam0 /*18*/], 1, false);
	unk_0x2E35C4FA5F0ED22F(Local_109[iParam0 /*18*/], true);
	unk_0x91629AC1E1F78419(Local_109[iParam0 /*18*/], 0, true);
	unk_0x8A8475988CA32D80(Local_109[iParam0 /*18*/], 3);
	unk_0xF82197F205B9D8FD(Local_109[iParam0 /*18*/], true);
	unk_0x91629AC1E1F78419(Local_109[iParam0 /*18*/], 17, true);
	unk_0xABA7AE40608505F2(Local_109[iParam0 /*18*/], 2, false);
	unk_0x656194E145691D3E(Local_109[iParam0 /*18*/], false);
	unk_0x22321800954A532E(Local_109[iParam0 /*18*/], true);
	unk_0x479A4C6E23FBB038(Local_109[iParam0 /*18*/], 100);
	unk_0xF2BA021070DE727E(Local_109[iParam0 /*18*/], -957453492);
	unk_0xC8FD3EBBB90E8D7F(Local_109[iParam0 /*18*/], 101, true);
	unk_0xC8FD3EBBB90E8D7F(Local_109[iParam0 /*18*/], 185, false);
	unk_0x65E471E4A2D56226(Local_109[iParam0 /*18*/], 300, 0);
	unk_0xB0031DDAE4FF0BC3(Local_109[iParam0 /*18*/], 3, (iParam0 % 2), SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_56)
	{
		unk_0x1E5C2A1EAB944289(Local_109[iParam0 /*18*/], true);
		unk_0x65E471E4A2D56226(Local_109[iParam0 /*18*/], 500, 0);
	}
	unk_0xEB061E1EBFED4D59(Local_109[iParam0 /*18*/], 1);
	unk_0x91629AC1E1F78419(Local_109[iParam0 /*18*/], 2, true);
	unk_0xDBA0F5674ACCE43C(Local_109[iParam0 /*18*/], 2f);
	unk_0x656194E145691D3E(Local_109[iParam0 /*18*/], false);
	unk_0xC3D5C68D28907D90(Local_109[iParam0 /*18*/], 0);
	Local_109[iParam0 /*18*/].f_2 = unk_0xB6896943DA475493(joaat("prop_pap_camera_01"), unk_0x823166D9421223CA(Local_109[iParam0 /*18*/], 28422, 0f, 0f, 0f), true, true, false);
	unk_0x5DBE04849460E608(Local_109[iParam0 /*18*/].f_2, Local_109[iParam0 /*18*/], unk_0xFA18E720A39243D0(Local_109[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0x724D816EA203A79E(Local_109[0 /*18*/].f_2))
	{
		unk_0xDC078F87049ECECE(Local_109[0 /*18*/].f_2, false, 0);
	}
	Local_109[iParam0 /*18*/].f_11 = unk_0x8D66276473ABD7CC(Local_109[iParam0 /*18*/]);
}

int func_59(int iParam0)//Position - 0x4572
{
	return iParam0 * 2 + 1;
}

void func_60(int iParam0)//Position - 0x4580
{
	if ((iParam0 % 2) == 1)
	{
		Local_109[iParam0 /*18*/].f_E = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_109[iParam0 /*18*/].f_E = (iParam0 / 2);
	}
}

int func_61(int iParam0)//Position - 0x45AD
{
	return iParam0 * 2;
}

void func_62(int iParam0)//Position - 0x45B9
{
	Local_108[iParam0 /*18*/].f_11 = 0;
}

int func_63()//Position - 0x45CA
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_67))
	{
		bVar0 = false;
		if (func_66())
		{
			if (unk_0x724D816EA203A79E(func_65()))
			{
				if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(func_65(), true), vLocal_53) < 5f && unk_0x8910237449BB6F79(iLocal_70) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0xE59B7F5A03335350(iLocal_70, 0))
		{
			if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_70, 0) && unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 0))
			{
				fLocal_151 = (fLocal_151 + unk_0x11F9F9006143871A());
			}
			else if (fLocal_151 > 0f)
			{
				fLocal_151 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_150 = (fLocal_150 + unk_0x11F9F9006143871A());
		}
		else if (fLocal_150 > 0f)
		{
			fLocal_150 = 0f;
		}
		if (fLocal_150 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_57)
		{
			if (!unk_0x25EF720B1CAB1E23(iLocal_67, iLocal_70))
			{
				if (unk_0x2CDE18D6C89522AD(iLocal_67))
				{
					bVar1 = true;
				}
				iLocal_57 = 0;
			}
		}
		if (!iLocal_57)
		{
			if (unk_0x25EF720B1CAB1E23(iLocal_67, iLocal_70))
			{
				iLocal_57 = 1;
			}
		}
		if (fLocal_151 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0xE59B7F5A03335350(iLocal_70, 0) && (!bLocal_129 || iLocal_45 == 1))
		{
			bVar1 = true;
		}
		if (SYSTEM::VDIST(vLocal_53, vLocal_52) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0xE59B7F5A03335350(iLocal_70, 0) && func_64(iLocal_70)) && (!bLocal_129 || iLocal_45 == 1)) && SYSTEM::VDIST(unk_0x541C2AEF053615BC(iLocal_67, true), vLocal_50) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0xE59B7F5A03335350(iLocal_70, 0) && unk_0x149E9368A11035DE(iLocal_70))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x491B2241281A03B7(0, 2) == 1)
			{
				sLocal_132 = "REPAP_GUP";
			}
			else
			{
				sLocal_132 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x4787
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (((unk_0xBCDD4514E5CAE591(iParam0, 0, 7000) || unk_0xBCDD4514E5CAE591(iParam0, 3, 30000)) || unk_0xBCDD4514E5CAE591(iParam0, 2, 30000)) || unk_0xBCDD4514E5CAE591(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_65()//Position - 0x47EC
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if ((unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]) && !unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/])) && !unk_0x36CEFBE9B745A58D(iLocal_67))
		{
			if (SYSTEM::VDIST2(vLocal_53, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(vLocal_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_109[iVar1 /*18*/];
	}
	return 0;
}

int func_66()//Position - 0x487A
{
	if (unk_0xE59B7F5A03335350(iLocal_70, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_67))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 0) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_70, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67()//Position - 0x48B7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (func_68(Local_109[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]))
		{
			if (unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]) || unk_0x1D403DFADBC2DE3C(Local_109[iVar0 /*18*/], 0))
			{
				if (iLocal_138[iVar0] > 50)
				{
					iLocal_110++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, bool bParam2)//Position - 0x4929
{
	vector3 vVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 7))
		{
			unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		}
		if (!bParam2)
		{
			if (unk_0x04880508C862E589(vVar0, 5f, 1))
			{
				return 1;
			}
		}
		if (SYSTEM::VDIST2(vVar0, vLocal_52) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6) && !unk_0x75F706B6889D7D86(unk_0xBC25C936A095B5BA())) && unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
				{
					return 1;
				}
			}
			if ((iVar1 == joaat("weapon_petrolcan") && unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA())) && SYSTEM::VDIST2(vLocal_52, vVar0) < 9f)
			{
				return 1;
			}
			if (((unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0)) && (func_69(vLocal_52, iParam0) && SYSTEM::VDIST2(vLocal_52, unk_0x541C2AEF053615BC(iParam0, true)) < 100f)) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				return 1;
			}
			if (iLocal_137 > 150)
			{
				return 1;
			}
		}
		if (unk_0xD9ED1893F2541636(unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x724D816EA203A79E(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_69(vector3 vParam0, int iParam1)//Position - 0x4A82
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	vVar0 = { unk_0x541C2AEF053615BC(iParam1, true) };
	vVar1 = { unk_0xA4455714F3DCE207(iParam1, 0f, 1f, 0f) - vVar0 };
	vVar2 = { vParam0 - vVar0 };
	fVar3 = func_70(vVar1, vVar2);
	if (fVar3 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_70(vector3 vParam0, vector3 vParam1)//Position - 0x4AD2
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_71()//Position - 0x4AF3
{
	if (iLocal_45 != 11)
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_123))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_123);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_124))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_124);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_121))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_121);
		}
		iLocal_46 = iLocal_45;
		iLocal_45 = 11;
	}
	else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 3)
		{
			if (!func_74())
			{
				func_72("REPAP_COP1");
			}
		}
		else
		{
			func_178(5);
		}
	}
	else if (func_5(&Local_139, cLocal_133, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_45 = iLocal_46;
	}
}

void func_72(char* sParam0)//Position - 0x4B8C
{
	if ((unk_0x105601648511CC64() - iLocal_197) > 5000)
	{
		if (!func_73())
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
			{
				iLocal_197 = unk_0x105601648511CC64();
			}
		}
	}
}

int func_73()//Position - 0x4BC4
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

bool func_74()//Position - 0x4BE6
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_67) && SYSTEM::VDIST2(vLocal_52, vLocal_53) < 400f)
	{
		if (!iLocal_111 && (unk_0x105601648511CC64() - iLocal_113) > 5000)
		{
			if (iLocal_63 > 10)
			{
				iLocal_111 = 1;
				iLocal_63 = 0;
			}
		}
		if ((!iLocal_116 && !iLocal_111) && (unk_0x105601648511CC64() - iLocal_117) > 4000)
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6) && unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				if (iLocal_118 > 2)
				{
					if (!Global_3 && !bLocal_56)
					{
						func_178(5);
					}
				}
				else
				{
					iLocal_116 = 1;
					iLocal_118++;
				}
			}
		}
		if (((!iLocal_114 && !iLocal_111) && !iLocal_116) && (unk_0x105601648511CC64() - iLocal_115) > 15000)
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iLocal_114 = 1;
			}
		}
		if (iLocal_111)
		{
			if (iLocal_112)
			{
				if (func_5(&Local_139, cLocal_133, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_113 = unk_0x105601648511CC64();
					iLocal_111 = 0;
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_113 = unk_0x105601648511CC64();
				iLocal_111 = 0;
				iLocal_112 = 1;
			}
		}
		if (iLocal_116)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_117 = unk_0x105601648511CC64();
				iLocal_116 = 0;
			}
		}
		if (iLocal_114)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_115 = unk_0x105601648511CC64();
				iLocal_114 = 0;
			}
		}
	}
	return ((iLocal_114 || iLocal_116) || iLocal_111);
}

void func_75()//Position - 0x4D96
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_67))
	{
		unk_0x22321800954A532E(iLocal_67, true);
		unk_0xA902E18EDF6FA0C8(255, iLocal_55, 1862763509);
		if (!Global_3 && !bLocal_56)
		{
			unk_0xC8FD3EBBB90E8D7F(iLocal_67, 317, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_67, false);
		}
	}
	func_79(-1, 0);
	func_76();
	unk_0xB3078ECF4A478FBC(62);
	func_274();
}

void func_76()//Position - 0x4DF0
{
	func_77();
}

int func_77()//Position - 0x4DFD
{
	if (func_78(0))
	{
		return 0;
	}
	if (Global_16B42.f_8)
	{
		if (Global_16B42.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_16B42.f_A > 1)
	{
		return 0;
	}
	Global_16B42.f_A++;
	return 1;
}

bool func_78(bool bParam0)//Position - 0x4E48
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_79(int iParam0, int iParam1)//Position - 0x4E73
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_96(iParam0))
	{
		func_95(iParam0, iParam1);
		if (!func_94(51))
		{
			func_90("RE_REWARD", 1, 0, 4000, 10000, func_93(), 0, 138, 0);
			func_89(51);
		}
		if (func_88(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_87(iParam0, iParam1) != 322)
		{
			func_81(func_87(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_80(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_80(7);
			}
			else
			{
				func_80(1);
			}
		}
	}
}

void func_80(int iParam0)//Position - 0x4F77
{
	Global_19AF6 = iParam0;
}

void func_81(int iParam0, var uParam1, var uParam2)//Position - 0x4F85
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_85((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_19B04.f_27B5[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_19B04.f_27B5[iParam0 /*12*/].f_6 == 11 || Global_19B04.f_27B5[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_19B04.f_27B5[iParam0 /*12*/].f_5 = 1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_A = uParam1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_B = uParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_82();
	}
}

void func_82()//Position - 0x506D
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_199FC = 0;
	Global_199FD = 0;
	Global_199FE = 0;
	Global_199FF = 0;
	Global_19A00 = 0;
	Global_19A01 = 0;
	Global_19A02 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_19B04.f_27B5.f_F0D;
	Global_19B04.f_27B5.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_19B04.f_27B5[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_19B04.f_27B5[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_199FC++;
					fVar1 = (fVar1 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_199FD++;
					fVar2 = (fVar2 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_199FE++;
					fVar3 = (fVar3 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_199FF++;
					fVar4 = (fVar4 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_19A00++;
					fVar5 = (fVar5 + (Global_19B04.f_27B5[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_19A01++;
					fVar6 = (fVar6 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_19A02++;
					fVar7 = (fVar7 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_199EB > 0)
	{
		if (Global_199FC == Global_199EB)
		{
			fVar1 = 55f;
		}
	}
	if (Global_199EC > 0)
	{
		if (Global_199FD == Global_199EC)
		{
			fVar2 = 10f;
		}
	}
	if (Global_199ED > 0)
	{
		if (Global_199FE == Global_199ED)
		{
			fVar3 = 0f;
		}
	}
	if (Global_199EE > 0)
	{
		if (Global_199FF == Global_199EE)
		{
			fVar4 = 10f;
		}
	}
	if (Global_199EF > 0)
	{
		if (((Global_19A00 == Global_199EF || (Global_199EF * 10 / Global_19A00) < 41) || Global_19A00 > Global_199F2) || Global_19A00 == Global_199F2)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_27B5.f_F10, 14))
			{
				if (Global_19A00 == Global_199EF)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_199EF, 0);
					unk_0xF0059F27F7BB6680(&(Global_19B04.f_27B5.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_199F0 > 0)
	{
		if (Global_19A01 == Global_199F0)
		{
			fVar6 = 15f;
		}
	}
	if (Global_199F1 > 0)
	{
		if (Global_19A02 == Global_199F1)
		{
			fVar7 = 5f;
		}
	}
	Global_19B04.f_27B5.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_19A00 > Global_199F2 || Global_19A00 == Global_199F2)
	{
		iVar9 = Global_199F2;
	}
	else
	{
		iVar9 = Global_19A00;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_199FC, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_199EB, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_199FD, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_199EC, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_199FE, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_199ED, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_199FF, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_199EE, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_199F2, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_19A02 + Global_19A01), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_199F1 + Global_199F0), 1);
	Global_19A03 = (Global_199FC * 100 / Global_199EB);
	Global_19A05 = ((Global_199FE + Global_199FD) * 100 / (Global_199ED + Global_199EC));
	Global_19A04 = ((Global_199FF + iVar9) * 100 / (Global_199EE + Global_199F2));
	Global_19A06 = ((Global_19A01 + Global_19A02) * 100 / (Global_199F0 + Global_199F1));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_19B04.f_27B5.f_F0D, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_19A03, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_19A04, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_19A05, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D))
	{
		func_84(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_83() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_77();
				}
			}
		}
	}
}

int func_83()//Position - 0x552E
{
	return Global_62BD;
}

int func_84(int iParam0, int iParam1)//Position - 0x5539
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

int func_85(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x558A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_86();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_86()//Position - 0x5AA4
{
	return Global_1407E0;
}

int func_87(int iParam0, int iParam1)//Position - 0x5AB0
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_88(int iParam0)//Position - 0x5E24
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_89(int iParam0)//Position - 0x5E53
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_4F9D.f_96[iVar1]), iVar0);
	}
}

void func_90(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5E95
{
	func_91(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_91(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x5EB5
{
	int iVar0;
	
	if (unk_0x3362CDE8460ED38B(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_4F9D[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19B04.f_4F9D.f_91 < 9)
	{
		StringCopy(&(Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_4), sParam1, 16);
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_8 = (unk_0x105601648511CC64() + iParam3);
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_9 = iParam5;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_B = iParam6;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_C = uParam2;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_D = iParam7;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_E = iParam8;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != -1)
		{
			Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_A = ((unk_0x105601648511CC64() + iParam3) + iParam4);
		}
		else
		{
			Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_A = -1;
		}
		Global_19B04.f_4F9D.f_91++;
		func_92();
	}
}

void func_92()//Position - 0x6087
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19B04.f_4F9D.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[0])
			{
				Global_19B04.f_4F9D.f_92[0] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[1])
			{
				Global_19B04.f_4F9D.f_92[1] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[2])
			{
				Global_19B04.f_4F9D.f_92[2] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_93()//Position - 0x61A7
{
	func_20();
	switch (Global_19B04.f_932.f_21B.f_10CD)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x61ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D.f_96[iVar1], iVar0);
	}
	return 0;
}

void func_95(int iParam0, int iParam1)//Position - 0x6230
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_96(int iParam0)//Position - 0x624B
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_97()//Position - 0x62FC
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_98(Var0);
	return uVar1;
}

int func_98(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x6319
{
	switch (unk_0x56BEECB328B6D29D(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_99()//Position - 0x64F3
{
	if (Global_63A9)
	{
		func_80(4);
		return 1;
	}
	return 0;
}

void func_100()//Position - 0x650B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_121))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_121);
	}
	switch (iLocal_130)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(iLocal_67))
			{
				unk_0x5558ED6D4A2DEC93(iLocal_67, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]))
				{
					if (unk_0x41A5D6415E2CC10E(Local_109[iVar0 /*18*/]) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_109[iVar0 /*18*/], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > 900f)
					{
						if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xA35241BCE4C1A24B(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0xF845620A03C7425B(&(Local_109[iVar0 /*18*/]));
					}
				}
				if (unk_0x2DA8CA50A72528FB(Local_109[iVar0 /*18*/].f_1))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_109[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_108)
			{
				if (unk_0x724D816EA203A79E(Local_108[iVar0 /*18*/]))
				{
					if (unk_0x41A5D6415E2CC10E(Local_108[iVar0 /*18*/]) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_108[iVar0 /*18*/], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > 900f)
					{
						unk_0xCF6040807CC0E4A5(&(Local_108[iVar0 /*18*/]));
					}
				}
				if (unk_0x2DA8CA50A72528FB(Local_108[iVar0 /*18*/].f_1))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_108[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_203 = 0;
			iLocal_130++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if ((unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]) && !unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/])) && !unk_0x1D403DFADBC2DE3C(Local_109[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_46(unk_0xBC25C936A095B5BA(), iVar0);
					if (unk_0x41A5D6415E2CC10E(Local_109[iVar0 /*18*/]) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_109[iVar0 /*18*/], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > 2500f)
					{
						if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xA35241BCE4C1A24B(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0xF845620A03C7425B(&(Local_109[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_203)
			{
				if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(func_65(), true)) < 100f)
				{
					iVar2 = unk_0x491B2241281A03B7(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 7);
						func_18(&Local_139, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x724D816EA203A79E(Local_139[6 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[6 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 7, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x724D816EA203A79E(Local_139[7 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[7 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 8, func_65(), "PAP3ESCAPE", 0, 1);
								if (unk_0x724D816EA203A79E(Local_139[8 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[8 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 5);
						iVar2 = unk_0x491B2241281A03B7(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x724D816EA203A79E(Local_139[iVar2 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x724D816EA203A79E(Local_139[iVar2 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x724D816EA203A79E(Local_139[iVar2 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 5);
						iVar2 = unk_0x491B2241281A03B7(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x724D816EA203A79E(Local_139[iVar2 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x724D816EA203A79E(Local_139[iVar2 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x724D816EA203A79E(Local_139[iVar2 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_67())
			{
				func_190();
				func_274();
			}
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_101(char* sParam0)//Position - 0x6AC5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (!iLocal_202)
	{
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]) && !unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]))
			{
				unk_0xA4E856A8CD53B8DF(Local_109[iVar0 /*18*/]);
				Local_109[iVar0 /*18*/].f_10 = 2;
			}
			iVar0++;
		}
		iLocal_202 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x2DA8CA50A72528FB(Local_109[iVar0 /*18*/].f_1))
		{
			unk_0x07B8ECB35A4ED3AC(&(Local_109[iVar0 /*18*/].f_1));
		}
		if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x36CEFBE9B745A58D(iLocal_67))
				{
					if (unk_0x5237AF95232D78C5(Local_109[iVar0 /*18*/], 0))
					{
						unk_0xA3981DED4FC2E56E(Local_109[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_67, iVar0);
					}
				}
				else if (unk_0xF4FCC3C1048FF2AB(Local_109[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0x8CE2798B9A7027EC(Local_109[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0x41A5D6415E2CC10E(Local_109[iVar0 /*18*/]) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_109[iVar0 /*18*/], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > 400f) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_109[iVar0 /*18*/], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > 400f)
			{
				unk_0xF845620A03C7425B(&(Local_109[iVar0 /*18*/]));
				if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/].f_2))
				{
					unk_0xA35241BCE4C1A24B(&(Local_109[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (unk_0x724D816EA203A79E(Local_108[iVar0 /*18*/]))
		{
			if ((unk_0x41A5D6415E2CC10E(Local_108[iVar0 /*18*/]) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_108[iVar0 /*18*/], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > 2500f) && func_52(Local_108[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0))
			{
				unk_0x1E7A09C1710FB071(&(Local_108[iVar0 /*18*/]));
			}
		}
		if (unk_0x2DA8CA50A72528FB(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0x07B8ECB35A4ED3AC(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x724D816EA203A79E(iLocal_67))
	{
		if (unk_0x41A5D6415E2CC10E(iLocal_67) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_53) > 2500f)
		{
			unk_0x02537C8C1BEEB477(&iLocal_67);
			func_274();
		}
	}
	if (func_67() || func_68(iLocal_67, 1, 1))
	{
		func_178(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_130)
	{
		case 0:
			if (unk_0x2DA8CA50A72528FB(iLocal_121))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_121);
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_122))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_122);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_67))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_67);
				unk_0xDBA0F5674ACCE43C(iLocal_67, 3f);
			}
			func_102();
			if (SYSTEM::VDIST(vLocal_52, vLocal_53) < 30f)
			{
				if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_109)
					{
						if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]))
						{
							if (!unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]))
							{
								unk_0xA4E856A8CD53B8DF(Local_109[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_130++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_109)
				{
					if (unk_0x724D816EA203A79E(Local_109[iVar0 /*18*/]))
					{
						if (!unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]))
						{
							unk_0xA4E856A8CD53B8DF(Local_109[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_130++;
			}
			break;
		
		case 1:
			if (((unk_0xE59B7F5A03335350(iLocal_70, 0) && unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 0)) && !bLocal_129) && unk_0x1AAF0C23233C57AF(iLocal_70, -1, 0))
			{
				if (SYSTEM::VDIST(vLocal_53, vLocal_49) < 100f)
				{
					unk_0xC5A6DFE2B8987B17(&iVar2);
					unk_0x9BFB4F4439403039(0, iLocal_70, 0);
					unk_0x509F549022512095(0, iLocal_70, vLocal_49, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0xD8386C462DB4E5CF(0, iLocal_70, vLocal_49, 288.7089f, 1, 50f, 0);
					unk_0x827661D9AAD4A354(0, iLocal_70, unk_0x541C2AEF053615BC(iLocal_70, true), 5, 10f, 262144, 2f, 2f, 1);
					unk_0x932E201A82D2EDB8(0, iLocal_70, 0);
					unk_0x346129B364057FF6(0, vLocal_50, 1f, -1, 0.25f, 512, fLocal_51);
					unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x535008C596714F9E(iVar2);
					unk_0xA8E6405305C0D7DF(iLocal_67, iVar2);
					unk_0x02DAF06EA4F08219(&iVar2);
				}
				else
				{
					unk_0xC5A6DFE2B8987B17(&iVar3);
					unk_0x9BFB4F4439403039(0, iLocal_70, 0);
					unk_0x204BA7B1C7DD25F4(0, iLocal_70, 15f, 786468);
					unk_0x535008C596714F9E(iVar3);
					unk_0xA8E6405305C0D7DF(iLocal_67, iVar3);
					unk_0x02DAF06EA4F08219(&iVar3);
				}
				iLocal_130 = 1000;
			}
			else
			{
				if (unk_0x5237AF95232D78C5(iLocal_67, 0))
				{
					unk_0xA3981DED4FC2E56E(iLocal_67, 0, 0);
				}
				iLocal_130++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0x5558ED6D4A2DEC93(iLocal_67, unk_0xBC25C936A095B5BA(), 3000f, -1, 1, 0);
				iLocal_130 = 1000;
			}
			else
			{
				if (SYSTEM::VDIST(vLocal_53, vLocal_49) < 100f)
				{
					unk_0xC5A6DFE2B8987B17(&iVar4);
					unk_0x346129B364057FF6(0, vLocal_50, 1f, -1, 0.25f, 512, fLocal_51);
					unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x535008C596714F9E(iVar4);
					unk_0xA8E6405305C0D7DF(iLocal_67, iVar4);
					unk_0x02DAF06EA4F08219(&iVar4);
				}
				else
				{
					unk_0x8CE2798B9A7027EC(iLocal_67, 1193033728, 0);
				}
				iLocal_130 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_102()//Position - 0x702F
{
	Global_394A = 0;
	func_103();
}

void func_103()//Position - 0x703F
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_104()//Position - 0x7060
{
	func_102();
	if (!unk_0x36CEFBE9B745A58D(iLocal_67) && SYSTEM::VDIST2(vLocal_52, vLocal_53) < 900f)
	{
		unk_0xA4E856A8CD53B8DF(iLocal_67);
		if (func_5(&Local_139, cLocal_133, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_190();
			func_178(10);
		}
		unk_0x4106FAF8AA1D69D5(iLocal_67, -2065892691);
	}
	else
	{
		func_190();
		func_178(10);
	}
}

void func_105()//Position - 0x70CA
{
	int iVar0;
	
	switch (iLocal_130)
	{
		case 0:
			func_137();
			if (!unk_0x36CEFBE9B745A58D(iLocal_67))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_121))
				{
					iLocal_121 = func_180(iLocal_67, 0, 145);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_124))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_124);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_123))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_123);
				}
				unk_0xA4E856A8CD53B8DF(iLocal_67);
				unk_0xC5A6DFE2B8987B17(&iVar0);
				unk_0x932E201A82D2EDB8(0, iLocal_70, 0);
				unk_0x346129B364057FF6(0, vLocal_50, 1f, 30000, 0.25f, 512, fLocal_51);
				unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x535008C596714F9E(iVar0);
				unk_0xA8E6405305C0D7DF(iLocal_67, iVar0);
				unk_0x02DAF06EA4F08219(&iVar0);
				if (unk_0xD45C08B05D4687A7(iLocal_67))
				{
					unk_0x57EB4CC8F1928A47(iLocal_67);
				}
				func_102();
				iLocal_130++;
			}
			break;
		
		case 1:
			if (!func_73() && !unk_0x36CEFBE9B745A58D(iLocal_67))
			{
				if (unk_0x4DBCE270B354E123(iLocal_67, vLocal_50, 3f, 3f, 3f, false, true, 0) && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_50, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x36CEFBE9B745A58D(iLocal_67))
			{
				func_136(0);
				if (func_5(&Local_139, cLocal_133, "REPAP_THK", 4, 0, 0, 0))
				{
					func_107(func_19(), 1, 150, 0, 1);
					iLocal_130++;
				}
			}
			break;
		
		case 3:
			if (!func_73() && !unk_0x36CEFBE9B745A58D(iLocal_67))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_130++;
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 2000)
			{
				if (func_106())
				{
					func_75();
				}
			}
			break;
	}
}

int func_106()//Position - 0x7268
{
	return 1;
}

void func_107(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7271
{
	int iVar0;
	int iVar1;
	
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_108(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6CB99B97664C3727(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3A57956BCE003880(iVar1, iVar0, 1);
	}
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7358
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_135();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_134(99, 1);
					func_133(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_133(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_133(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_119(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_115(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_115(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_115(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_114(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_134(95, iParam3);
					break;
				
				case 1:
					func_134(97, iParam3);
					break;
				
				case 2:
					func_134(96, iParam3);
					break;
			}
			func_134(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_111(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_111(iVar1);
	}
	iVar5 = (Global_CF95[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_CF95[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_CF95[iVar2] = 2147483647;
				}
				else
				{
					Global_CF95[iVar2] = (Global_CF95[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_133(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_133(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_133(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_CF95[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_CF95[iVar2];
			Global_CF95[iVar2] = (Global_CF95[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/]++;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1++;
		if (Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_110(iParam0);
	if (Global_8C41 == 15)
	{
		func_109(0);
	}
	return 1;
}

void func_109(bool bParam0)//Position - 0x7957
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_CF9D[iVar0 /*3*/][0] = Global_19B04.f_5037[iVar0];
		Global_CF9D.f_1F[iVar0 /*3*/][0] = Global_19B04.f_5037.f_B[iVar0];
		Global_CF9D.f_3E[iVar0 /*3*/][0] = Global_19B04.f_5037.f_16[iVar0];
		Global_CF9D.f_5D[iVar0 /*3*/][0] = Global_19B04.f_5037.f_21[iVar0];
		Global_CF9D.f_7C[iVar0 /*3*/][0] = Global_19B04.f_5037.f_2C[iVar0];
		Global_CF9D.f_9B[iVar0 /*3*/][0] = Global_19B04.f_5037.f_37[iVar0];
		Global_CF9D.f_BA[iVar0 /*3*/][0] = Global_19B04.f_5037.f_42[iVar0];
		Global_CF9D.f_D9[iVar0 /*3*/][0] = Global_19B04.f_5037.f_4D[iVar0];
		Global_CF9D.f_F8[iVar0 /*3*/][0] = Global_19B04.f_5037.f_58[iVar0];
		if (!bParam0)
		{
			Global_CF9D[iVar0 /*3*/][1] = Global_19B04.f_5037[iVar0];
			Global_CF9D.f_1F[iVar0 /*3*/][1] = Global_19B04.f_5037.f_B[iVar0];
			Global_CF9D.f_3E[iVar0 /*3*/][1] = Global_19B04.f_5037.f_16[iVar0];
			Global_CF9D.f_5D[iVar0 /*3*/][1] = Global_19B04.f_5037.f_21[iVar0];
			Global_CF9D.f_7C[iVar0 /*3*/][1] = Global_19B04.f_5037.f_2C[iVar0];
			Global_CF9D.f_9B[iVar0 /*3*/][1] = Global_19B04.f_5037.f_37[iVar0];
			Global_CF9D.f_BA[iVar0 /*3*/][1] = Global_19B04.f_5037.f_42[iVar0];
			Global_CF9D.f_D9[iVar0 /*3*/][1] = Global_19B04.f_5037.f_4D[iVar0];
			Global_CF9D.f_F8[iVar0 /*3*/][1] = Global_19B04.f_5037.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_110(int iParam0)//Position - 0x7BD9
{
	int iVar0;
	
	iVar0 = Global_CF95[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_111(int iParam0)//Position - 0x7C33
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_85(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_113() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_113() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_112(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_112(int iParam0)//Position - 0x7D08
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_113()//Position - 0x7D8E
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_114(int iParam0)//Position - 0x7D9B
{
	func_134(93, iParam0);
	func_134(29, iParam0);
	func_134(30, iParam0);
}

bool func_115(int iParam0)//Position - 0x7DBB
{
	if (iParam0 == 8)
	{
		return func_116(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_113() /*12171*/].f_1E08.f_A, iParam0);
}

int func_116(int iParam0, int iParam1, int iParam2)//Position - 0x7E09
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_86();
	}
	iVar1 = func_118(iParam0, iParam1);
	uVar2 = func_117(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_117(int iParam0)//Position - 0x7E46
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_118(int iParam0, int iParam1)//Position - 0x8134
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_86();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_119(bool bParam0)//Position - 0x8401
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_84(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_120(27, 1);
	return 1;
}

int func_120(int iParam0, int iParam1)//Position - 0x84B8
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_121(iParam0, iParam1);
}

int func_121(int iParam0, int iParam1)//Position - 0x84D3
{
	if (func_12(14) && !func_132(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_63B4 != 0 && !Global_11542)
	{
		return 0;
	}
	if (func_131(&Global_411EB6))
	{
		if (func_129(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_122(&Global_411EB6, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_122(var uParam0, int iParam1)//Position - 0x8570
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_132(iParam1))
	{
		return 0;
	}
	if (func_129(uParam0, iParam1))
	{
		return 0;
	}
	if (func_128(uParam0) < 0f)
	{
		func_127(uParam0, 0);
	}
	func_125(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_123(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_123(var uParam0, int iParam1)//Position - 0x8621
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_132(iParam1))
	{
		return 0;
	}
	if (func_129(uParam0, iParam1))
	{
		return 0;
	}
	if (func_128(uParam0) < 0f)
	{
		func_127(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_124(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_124(var uParam0, int iParam1)//Position - 0x869C
{
	return (*uParam0)[iParam1] == 78;
}

void func_125(var uParam0)//Position - 0x86AD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_126(uParam0, iVar0);
		iVar0++;
	}
	func_127(uParam0, (Global_411EB5 - 0.5f));
}

void func_126(var uParam0, int iParam1)//Position - 0x86E1
{
	(*uParam0)[iParam1] = 78;
}

void func_127(var uParam0, float fParam1)//Position - 0x86F1
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_128(var uParam0)//Position - 0x870E
{
	return uParam0->f_50;
}

bool func_129(var uParam0, int iParam1)//Position - 0x871A
{
	return func_130(uParam0, iParam1) != -1;
}

int func_130(var uParam0, int iParam1)//Position - 0x872C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_131(var uParam0)//Position - 0x8759
{
	return uParam0->f_4F == 1;
}

int func_132(int iParam0)//Position - 0x8767
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_133(int iParam0, int iParam1)//Position - 0x87B7
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_134(int iParam0, int iParam1)//Position - 0x87DA
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_C9FD[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_C9FD[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_C9FD[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_C9FD[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_135()//Position - 0x8837
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_CF95[0] == iVar0)
		{
			Global_CF95[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_CF95[1] == iVar0)
		{
			Global_CF95[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_CF95[2] == iVar0)
		{
			Global_CF95[2] = iVar0;
		}
	}
}

void func_136(bool bParam0)//Position - 0x88AC
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_67))
	{
		if (iLocal_170 > 1)
		{
			if (!unk_0xC5B8A5F778E321DD(iLocal_67, unk_0xBC25C936A095B5BA(), 60f))
			{
				iLocal_170 = 0;
				iLocal_171 = 0;
			}
		}
		switch (iLocal_170)
		{
			case 0:
				unk_0xA4E856A8CD53B8DF(iLocal_67);
				unk_0x56F2E1B5599188FA(iLocal_67, unk_0xBC25C936A095B5BA(), -1, 16, 2);
				unk_0xC5A6DFE2B8987B17(&iLocal_169);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 16, 2);
				unk_0x535008C596714F9E(iLocal_169);
				unk_0xA8E6405305C0D7DF(iLocal_67, iLocal_169);
				unk_0x02DAF06EA4F08219(&iLocal_169);
				iLocal_170++;
				break;
			
			case 1:
				if (unk_0xF4FCC3C1048FF2AB(iLocal_67, 242628503) != 1)
				{
					iLocal_170++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_171)
					{
						case 0:
							if (!unk_0x96044E39418AAF17(iLocal_67, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0xE896C0AD02364F2A(iLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x4A3B2CF8BADDD74E(iLocal_67, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0xE896C0AD02364F2A(iLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171++;
							}
							break;
						
						case 1:
							if (!unk_0x96044E39418AAF17(iLocal_67, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0xE896C0AD02364F2A(iLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x4A3B2CF8BADDD74E(iLocal_67, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0xE896C0AD02364F2A(iLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171++;
							}
							break;
						
						case 2:
							if (!unk_0x96044E39418AAF17(iLocal_67, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0xE896C0AD02364F2A(iLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x4A3B2CF8BADDD74E(iLocal_67, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0xE896C0AD02364F2A(iLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_137()//Position - 0x8ACA
{
	if (unk_0x2DA8CA50A72528FB(iLocal_125))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_125);
	}
}

void func_138()//Position - 0x8AE3
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iLocal_70, 0))
	{
		switch (iLocal_130)
		{
			case 0:
				if (!unk_0x36CEFBE9B745A58D(iLocal_67) && unk_0xE59B7F5A03335350(iLocal_70, 0))
				{
					func_137();
					func_142(1, 1, 0, 0, 0);
					if (unk_0x2DA8CA50A72528FB(iLocal_123))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_123);
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_121))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_121);
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_122))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_122);
					}
					if (unk_0xD45C08B05D4687A7(iLocal_67))
					{
						unk_0x57EB4CC8F1928A47(iLocal_67);
					}
					func_140();
					if (!unk_0x36CEFBE9B745A58D(iLocal_67))
					{
						unk_0x4BED3C9D6EF14C38(iLocal_67, unk_0xA4455714F3DCE207(iLocal_70, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_70, 10f, 5f, 0f), 15000, 16, 4);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 1280);
					if ((bLocal_129 || Global_3) || bLocal_56)
					{
						while (!func_139(&Local_139, cLocal_133, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					else
					{
						while (!func_5(&Local_139, cLocal_133, "REPAP_THK", 4, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					func_107(func_19(), 1, 750, 0, 1);
					if (!unk_0x36CEFBE9B745A58D(iLocal_67))
					{
						unk_0x4BED3C9D6EF14C38(iLocal_67, unk_0xA4455714F3DCE207(iLocal_70, -10f, 5f, 0f), -1, 16, 4);
						unk_0x2EB4D46478766D87(iLocal_67, 0, 0);
					}
					unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_70, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_130++;
				}
				break;
			
			case 1:
				if (!func_73() && !unk_0x36CEFBE9B745A58D(iLocal_67))
				{
					unk_0xC5A6DFE2B8987B17(&iVar0);
					unk_0x932E201A82D2EDB8(0, iLocal_70, 0);
					unk_0x346129B364057FF6(0, vLocal_50, 1f, 30000, 0.25f, 512, fLocal_51);
					unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x535008C596714F9E(iVar0);
					unk_0xA8E6405305C0D7DF(iLocal_67, iVar0);
					unk_0x02DAF06EA4F08219(&iVar0);
					iLocal_130++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (!unk_0x36CEFBE9B745A58D(iLocal_67) && unk_0xE59B7F5A03335350(iLocal_70, 0))
				{
					if (!unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (bLocal_129)
						{
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
							func_142(0, 1, 0, 0, 0);
							iLocal_130 = 5;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0x36CEFBE9B745A58D(iLocal_67) && unk_0xE59B7F5A03335350(iLocal_70, 0)) && SYSTEM::TIMERA() > 1000)
				{
					unk_0x932E201A82D2EDB8(unk_0xBC25C936A095B5BA(), iLocal_70, 0);
					unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iLocal_70, 10000, 0, 3);
					iLocal_130++;
				}
				break;
			
			case 4:
				if (unk_0xE59B7F5A03335350(iLocal_70, 0) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_70, 0))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					func_142(0, 1, 0, 0, 0);
					unk_0xD421BC740C5340C3(iLocal_70, 2);
					SYSTEM::SETTIMERA(0);
					iLocal_130++;
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 1000)
				{
					if (func_106())
					{
						if (!bLocal_129)
						{
							if (!func_94(19))
							{
								func_90("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_89(19);
							}
						}
						func_75();
					}
				}
				break;
			}
	}
}

bool func_139(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8E11
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 1;
	Global_4199 = 0;
	Global_419D = 0;
	StringCopy(&Global_41A4, sParam3, 24);
	Global_280001 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_140()//Position - 0x8E65
{
	Global_394A = 0;
	func_141();
}

void func_141()//Position - 0x8E75
{
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x5C7DC611411E2CF9();
		Global_41AB = 0;
		unk_0x1E08809A5041F85B(true);
		Global_3DB8 = 6;
		return;
	}
}

void func_142(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x8E99
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_149(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_9())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_148(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_149(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_148(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_146(unk_0xB5CEFD608600A09F())) && !func_144(unk_0xB5CEFD608600A09F(), 0)) && !func_143()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_146(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_143()//Position - 0x8FC2
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_144(int iParam0, int iParam1)//Position - 0x8FDF
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_145(-1, 0) == 8;
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

int func_145(int iParam0, bool bParam1)//Position - 0x902A
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_86();
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

int func_146(int iParam0)//Position - 0x906B
{
	if (func_144(iParam0, 0))
	{
		return 1;
	}
	if (func_147())
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

bool func_147()//Position - 0x90AD
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_148(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x90BE
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_149(int iParam0)//Position - 0x90F1
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 13);
	}
}

void func_150()//Position - 0x9114
{
	if (Global_3 || bLocal_56)
	{
		unk_0x598D851D7D0D2BA3(0.7f);
	}
	if (bLocal_129 && !unk_0x36CEFBE9B745A58D(iLocal_67))
	{
		if (!func_171(iLocal_67))
		{
			if (!unk_0x2DA8CA50A72528FB(iLocal_121))
			{
				iLocal_121 = func_180(iLocal_67, 0, 145);
			}
		}
		else
		{
			if (func_66())
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_123))
				{
					iLocal_123 = func_50(vLocal_49, 1);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_124))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_124);
				}
			}
			else
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_124))
				{
					iLocal_124 = func_50(vLocal_50, 1);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_123))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_123);
				}
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_121))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_121);
			}
		}
		if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_70, 0))
		{
			if ((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0)) && func_170(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
			{
				iLocal_70 = 0;
				iLocal_70 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				unk_0x77815D3407C6700D(iLocal_70, true, 1);
				unk_0xD421BC740C5340C3(iLocal_70, 1);
				unk_0xD38EB677CBE7440A(iLocal_70, false, 0);
			}
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_124) && !unk_0x5237AF95232D78C5(iLocal_67, 0))
		{
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_50, 15f, 15f, 15f, false, true, 0) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, true, true, 0))
			{
				func_178(4);
			}
		}
		else if (iLocal_130 != 100)
		{
			if (func_66() && func_169(1, 1, 1))
			{
				if (unk_0x0C265B3C448E6954(iLocal_70, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_130 = 100;
				}
			}
			else if (!unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_67, -1794415470) != 1)
				{
					unk_0xD179FA0466FA4FE3(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_130 != 100)
		{
			if (func_66() && func_169(1, 1, 1))
			{
				if (unk_0x0C265B3C448E6954(iLocal_70, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_130 = 100;
				}
			}
		}
		func_165(1);
	}
	switch (iLocal_130)
	{
		case 0:
			if (func_66())
			{
				if (unk_0x96044E39418AAF17(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x96044E39418AAF17(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_67);
				}
				if (func_5(&Local_139, cLocal_133, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0xDF53A66AEE1401AA(0.5f);
					iLocal_130++;
				}
				if (!func_164())
				{
					func_159();
				}
			}
			break;
		
		case 1:
			if (!func_74())
			{
				if (func_66())
				{
					if (!func_73())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_74())
			{
				if (func_66())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (Global_3 || bLocal_56)
						{
							iLocal_130 = 99;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_155("REPAP_HOME1", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_155("REPAP_HOME1M", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_155("REPAP_HOME1F", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			else if (func_155("REPAP_HOME1T", (func_158() && !func_74())))
			{
				iLocal_130++;
			}
			break;
		
		case 5:
			if (func_155("REPAP_HOME1L", (func_158() && !func_74())))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_130++;
			}
			break;
		
		case 6:
			if (!func_74())
			{
				if (SYSTEM::TIMERA() > 7000)
				{
					if (func_158())
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME2"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 8:
			if (func_155("REPAP_HOME2L", (func_158() && !func_74())))
			{
				iLocal_130++;
			}
			break;
		
		case 9:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_RESP2"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 10:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_155("REPAP_HOME3", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 11:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME3"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 12:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_155("REPAP_HOME4", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 13:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME4"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 14:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_155("REPAP_NOBAN", (func_158() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 15:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_NOBAN"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 17:
			func_74();
			break;
		
		case 100:
			if (func_152(iLocal_70, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_179("");
				func_178(3);
			}
			break;
	}
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		func_71();
	}
	if (func_19() == 2)
	{
		if ((func_151() && !func_164()) && iLocal_45 != 8)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_67))
			{
				if (unk_0x4DBCE270B354E123(iLocal_67, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, false, true, 0))
				{
					if (!unk_0x9488E18994C5C83D(iLocal_67, unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F())))
					{
						unk_0x75E3FA28CC7D5707(iLocal_67, unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F()));
					}
					func_102();
					iLocal_45 = 8;
				}
			}
		}
	}
}

var func_151()//Position - 0x9920
{
	return Global_63A8;
}

int func_152(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x992B
{
	unk_0xBBC4195AD74D153D(0, 71, 1);
	unk_0xBBC4195AD74D153D(0, 72, 1);
	unk_0xBBC4195AD74D153D(0, 76, 1);
	unk_0xBBC4195AD74D153D(0, 73, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	if (bParam5)
	{
		unk_0xBBC4195AD74D153D(0, 75, 1);
	}
	unk_0xBBC4195AD74D153D(0, 80, 1);
	if (!bParam6)
	{
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
	}
	unk_0xBBC4195AD74D153D(0, 74, 1);
	unk_0xBBC4195AD74D153D(0, 86, 1);
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 138, 1);
	unk_0xBBC4195AD74D153D(0, 136, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 107, 1);
	unk_0xBBC4195AD74D153D(0, 110, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 87, 1);
	unk_0xBBC4195AD74D153D(0, 88, 1);
	unk_0xBBC4195AD74D153D(0, 113, 1);
	unk_0xBBC4195AD74D153D(0, 115, 1);
	unk_0xBBC4195AD74D153D(0, 116, 1);
	unk_0xBBC4195AD74D153D(0, 117, 1);
	unk_0xBBC4195AD74D153D(0, 118, 1);
	unk_0xBBC4195AD74D153D(0, 119, 1);
	unk_0xBBC4195AD74D153D(0, 131, 1);
	unk_0xBBC4195AD74D153D(0, 132, 1);
	unk_0xBBC4195AD74D153D(0, 123, 1);
	unk_0xBBC4195AD74D153D(0, 126, 1);
	unk_0xBBC4195AD74D153D(0, 129, 1);
	unk_0xBBC4195AD74D153D(0, 130, 1);
	unk_0xBBC4195AD74D153D(0, 133, 1);
	unk_0xBBC4195AD74D153D(0, 134, 1);
	unk_0x12D40A07C0F343DC();
	func_153(iParam0);
	if ((unk_0x105601648511CC64() - Global_1D) > 500)
	{
		unk_0x241D744C1CCBC526(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = unk_0x105601648511CC64();
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x357058E632979E65(unk_0x8910237449BB6F79(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_153(int iParam0)//Position - 0x9ABA
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

int func_154(char* sParam0)//Position - 0x9AE6
{
	vector3 vVar0;
	
	StringConCat(&vVar0, sParam0, 24);
	if (func_19() == 0)
	{
		StringConCat(&vVar0, "M", 24);
	}
	else if (func_19() == 1)
	{
		StringConCat(&vVar0, "F", 24);
	}
	else
	{
		StringConCat(&vVar0, "T", 24);
	}
	if (func_5(&Local_139, cLocal_133, &vVar0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_155(char* sParam0, bool bParam1)//Position - 0x9B3A
{
	if (bParam1)
	{
		if (!iLocal_58)
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
			{
				iLocal_58 = 1;
				iLocal_59 = 0;
			}
		}
		else if (iLocal_59)
		{
			if (func_157(&Local_139, cLocal_133, sParam0, &Local_61, 4, 0, 0))
			{
				iLocal_59 = 0;
			}
		}
		if ((iLocal_58 && !iLocal_59) && bParam1)
		{
			if (iLocal_62 == -1)
			{
				if (!func_73())
				{
					iLocal_62 = unk_0x105601648511CC64();
				}
			}
			else if ((unk_0x105601648511CC64() - iLocal_62) > 500)
			{
				iLocal_62 = -1;
				iLocal_58 = 0;
				iLocal_59 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_58 && !iLocal_59)
	{
		Local_61 = { func_156() };
		func_140();
		iLocal_59 = 1;
	}
	return 0;
}

struct<6> func_156()//Position - 0x9BEA
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		iVar1 = unk_0xC0A904C0F2775676();
		iVar1 = (iVar1 + Global_41AA);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0x0F6F4C227FB5DD52(&(Global_394C[iVar2 /*6*/])))
			{
				return Global_394C[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0x0F6F4C227FB5DD52(&(Global_394C[iVar3 /*6*/])))
					{
						return Global_394C[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_394C[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_157(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9C96
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 1;
	StringCopy(&Global_41A4, sParam3, 24);
	Global_280001 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_158()//Position - 0x9CEA
{
	if (bLocal_129)
	{
		if (unk_0xE59B7F5A03335350(iLocal_70, 0))
		{
			if (func_66())
			{
				return 1;
			}
		}
		if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0x5237AF95232D78C5(iLocal_67, 0))
		{
			if (SYSTEM::VDIST2(vLocal_52, vLocal_53) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_66();
	}
	return 0;
}

void func_159()//Position - 0x9D4B
{
	if (func_19() == 2)
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_125))
		{
			func_162();
			iLocal_125 = func_161(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0xBF0E22F3E083C33D(iLocal_125, 269);
			func_160();
		}
	}
}

void func_160()//Position - 0x9D8F
{
	if (!func_164())
	{
		if (func_19() == 2)
		{
			Global_63A8 = 1;
		}
	}
}

int func_161(vector3 vParam0, bool bParam1)//Position - 0x9DAB
{
	return func_50(vParam0, bParam1);
}

void func_162()//Position - 0x9DBD
{
	if (func_19() == 2)
	{
		if (!Global_63AA)
		{
			func_163("CULT_BLIP_HELP", -1);
			Global_63AA = 1;
		}
	}
}

void func_163(char* sParam0, int iParam1)//Position - 0x9DE1
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_164()//Position - 0x9DF8
{
	if (Global_19B04.f_6186.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_165(bool bParam0)//Position - 0x9E14
{
	if (unk_0xE59B7F5A03335350(iLocal_70, 0) && !unk_0x36CEFBE9B745A58D(iLocal_67))
	{
		if (func_66())
		{
			if (bParam0)
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_123))
				{
					iLocal_123 = func_50(vLocal_49, 1);
				}
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_121))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_121);
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_122))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_122);
			}
		}
		else
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_123))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_123);
			}
			if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_70, 0))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_122))
				{
					iLocal_122 = func_166(iLocal_70, 0, 0);
				}
			}
			if (!unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 0))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_121))
				{
					iLocal_121 = func_180(iLocal_67, 0, 145);
				}
			}
			else if (unk_0x2DA8CA50A72528FB(iLocal_121))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_121);
			}
		}
	}
}

int func_166(int iParam0, bool bParam1, bool bParam2)//Position - 0x9EE8
{
	return func_167(iParam0, !bParam1, bParam2);
}

int func_167(int iParam0, bool bParam1, bool bParam2)//Position - 0x9EFB
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_51(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(iVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_51(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_51(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_168(int iParam0)//Position - 0x9F9F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0x524ABB0435146845(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x1AAF0C23233C57AF(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_169(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9FE9
{
	int iVar0;
	
	if (unk_0x21EBACBD9FF28F79())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (bParam0)
		{
			if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0x3187EF5798B5D209(iVar0, -1, 0) != unk_0xBC25C936A095B5BA())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xEFA31351B754089B(iVar0) < 0.95f || unk_0xEFA31351B754089B(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0)//Position - 0xA0CE
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x1AAF0C23233C57AF(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0)//Position - 0xA11E
{
	if (unk_0x9488E18994C5C83D(iParam0, unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F())))
	{
		if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0x57EB4CC8F1928A47(iParam0);
		}
		return 1;
	}
	else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, Global_13, 0, 1, 0))
	{
		unk_0x75E3FA28CC7D5707(iParam0, unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F()));
	}
	return 0;
}

void func_172()//Position - 0xA188
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_67) && unk_0xE59B7F5A03335350(iLocal_70, 0))
	{
		if (!unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 1))
		{
			if (unk_0xF4FCC3C1048FF2AB(iLocal_67, -1794415470) != 1)
			{
				unk_0xD179FA0466FA4FE3(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 2f, 8388608, 0);
			}
		}
		if ((unk_0x724D816EA203A79E(func_65()) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iLocal_67, true), unk_0x541C2AEF053615BC(func_65(), true)) < 100f) && (unk_0x8910237449BB6F79(iLocal_70) < 5f || !unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iLocal_70))))
		{
			if (bLocal_129)
			{
				if (!unk_0x96044E39418AAF17(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0x25EF720B1CAB1E23(iLocal_67, iLocal_70))
				{
					unk_0xE896C0AD02364F2A(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0x96044E39418AAF17(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0x25EF720B1CAB1E23(iLocal_67, iLocal_70))
			{
				unk_0xE896C0AD02364F2A(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0x96044E39418AAF17(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x96044E39418AAF17(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0x25EF720B1CAB1E23(iLocal_67, iLocal_70))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_67);
		}
		switch (iLocal_130)
		{
			case 0:
				if (SYSTEM::TIMERA() > 2000)
				{
					if (unk_0x724D816EA203A79E(func_65()) && !unk_0x36CEFBE9B745A58D(func_65()))
					{
						func_18(&Local_139, 4);
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
					}
					iLocal_47 = 2;
					func_102();
					if (func_5(&Local_139, cLocal_133, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0xDF53A66AEE1401AA(0.2f);
						unk_0x2E35C4FA5F0ED22F(iLocal_67, true);
						unk_0xA902E18EDF6FA0C8(1, iLocal_55, 1862763509);
						iLocal_119 = unk_0xB6896943DA475493(joaat("prop_ld_test_01"), vLocal_68, true, true, false);
						unk_0xD434A01DEA38A939(iLocal_119, false, 0);
						unk_0xDC078F87049ECECE(iLocal_119, false, 0);
						unk_0x346478B12F69D4E3(iLocal_119, true);
						iLocal_130++;
					}
				}
				break;
			
			case 1:
				func_174();
				if (!unk_0x0C265B3C448E6954(iLocal_67, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, true, 0))
				{
					iLocal_130++;
					iLocal_131 = unk_0x105601648511CC64();
					iLocal_47 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_198)
				{
					if (((((iLocal_200 != 1 && iLocal_200 != 3) && iLocal_200 != 6) && iLocal_200 != 9) && iLocal_200 != 11) && iLocal_200 != 13)
					{
						bLocal_199 = false;
						if (unk_0x724D816EA203A79E(func_65()) && unk_0xE642C1AC73CE364E(func_65(), iLocal_70, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_198 = true;
						}
					}
				}
				else
				{
					if (!func_73())
					{
						bLocal_199 = true;
					}
					if (unk_0x724D816EA203A79E(func_65()))
					{
						if (!unk_0xE642C1AC73CE364E(func_65(), iLocal_70, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_198 = false;
						}
					}
				}
				if (bLocal_199)
				{
					if (!func_74())
					{
						if (!func_173())
						{
							func_174();
						}
					}
				}
				else
				{
					switch (iLocal_200)
					{
						case 0:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_200++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_154("REPAP_RES1"))
								{
									iLocal_201 = unk_0x105601648511CC64();
									iLocal_200++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x105601648511CC64() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT2"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0x105601648511CC64();
									iLocal_200++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x105601648511CC64() - iLocal_201) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT3M", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT3F", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_155("REPAP_CHT3T", ((func_158() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 4)
								{
									iLocal_201 = unk_0x105601648511CC64();
								}
							}
							break;
						
						case 5:
							if ((unk_0x105601648511CC64() - iLocal_201) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT4M", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT4F", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_155("REPAP_CHT4T", ((func_158() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 5)
								{
									iLocal_201 = unk_0x105601648511CC64();
								}
							}
							break;
						
						case 6:
							if ((unk_0x105601648511CC64() - iLocal_201) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT5M", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT5F", ((func_158() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_155("REPAP_CHT5T", ((func_158() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 6)
								{
									iLocal_201 = unk_0x105601648511CC64();
								}
							}
							break;
						
						case 7:
							if ((unk_0x105601648511CC64() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT6"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0x105601648511CC64();
									iLocal_200++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x105601648511CC64() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT7"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0x105601648511CC64();
									iLocal_200++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x105601648511CC64() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT8"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_198 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_200++;
								}
							}
							break;
						}
				}
				if (!unk_0x724D816EA203A79E(func_65()))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_130++;
					func_140();
					if (!Global_3 && !bLocal_56)
					{
						iLocal_47 = 6;
					}
				}
				if (Global_3 || bLocal_56)
				{
					if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, false, true, 0) && func_66())
					{
						iLocal_47 = 4;
						iLocal_66 = unk_0x105601648511CC64();
					}
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERA() > 3000 && func_66())
				{
					func_179("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_139, cLocal_133, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_178(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_165(0);
	}
}

int func_173()//Position - 0xAAB2
{
	int iVar0;
	
	iVar0 = func_24();
	if ((unk_0x105601648511CC64() - iLocal_196) > 5000)
	{
		if (unk_0x724D816EA203A79E(iLocal_70) && unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 0))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_70, 1))
			{
				if (iVar0 != -1 && (unk_0x105601648511CC64() - Local_109[iVar0 /*18*/].f_C) < 3000)
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_196 = unk_0x105601648511CC64();
						return 1;
					}
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_196 = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

void func_174()//Position - 0xAB54
{
	int iVar0;
	
	if ((unk_0x105601648511CC64() - iLocal_145) > iLocal_146)
	{
		if ((!unk_0x36CEFBE9B745A58D(iLocal_67) && unk_0x724D816EA203A79E(func_65())) && !unk_0x36CEFBE9B745A58D(func_65()))
		{
			if (unk_0xF0F2FC9DE291567F(vLocal_53, unk_0x541C2AEF053615BC(func_65(), true), true) < 8f)
			{
				iVar0 = unk_0x491B2241281A03B7(0, 5);
				func_18(&Local_139, 4);
				func_18(&Local_139, 5);
				func_18(&Local_139, 6);
				func_18(&Local_139, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0x724D816EA203A79E(Local_139[4 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[4 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x105601648511CC64();
								iLocal_146 = unk_0x491B2241281A03B7(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0x724D816EA203A79E(Local_139[4 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[4 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x105601648511CC64();
								iLocal_146 = unk_0x491B2241281A03B7(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_139, 5, func_65(), "PAP2", 0, 1);
						if (unk_0x724D816EA203A79E(Local_139[5 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[5 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x105601648511CC64();
								iLocal_146 = unk_0x491B2241281A03B7(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_139, 6, func_65(), "PAP3", 0, 1);
						if (unk_0x724D816EA203A79E(Local_139[6 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[6 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x105601648511CC64();
								iLocal_146 = unk_0x491B2241281A03B7(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_139, 7, func_65(), "PAP4", 0, 1);
						if (unk_0x724D816EA203A79E(Local_139[7 /*10*/]) && !unk_0x36CEFBE9B745A58D(Local_139[7 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0x105601648511CC64();
								iLocal_146 = unk_0x491B2241281A03B7(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_175()//Position - 0xADBB
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3[24];
	char* sVar4;
	vector3 vVar5[24];
	int iVar6;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_67))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_121))
		{
			unk_0x222805B89367761E(iLocal_121, iLocal_194);
		}
		switch (iLocal_130)
		{
			case 0:
				unk_0x522053D86D6E1C7A("random@paparazzi@peek");
				unk_0x522053D86D6E1C7A("random@paparazzi@trans");
				unk_0x522053D86D6E1C7A("random@paparazzi@wait");
				if ((unk_0xF9E082857622D91E("random@paparazzi@peek") && unk_0xF9E082857622D91E("random@paparazzi@trans")) && unk_0xF9E082857622D91E("random@paparazzi@wait"))
				{
					iLocal_174 = unk_0xD0D858E538FD01C3(vLocal_187, vLocal_188, 2);
					unk_0xB62398E536F695FC(iLocal_67, iLocal_174, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0x56F2E1B5599188FA(iLocal_67, unk_0xBC25C936A095B5BA(), -1, 4, 4);
					sLocal_175[0] = "peek_a";
					sLocal_175[1] = "peek_b";
					sLocal_175[2] = "peek_c";
					unk_0xDF53A66AEE1401AA(0.2f);
					iLocal_172 = 0;
					iLocal_189 = 0;
					bLocal_194 = false;
					iLocal_60 = 1;
					iLocal_190 = 0;
					iLocal_57 = 0;
					fLocal_191 = 0f;
					iLocal_130++;
				}
				break;
			
			case 1:
				if (unk_0xFA30DFD0084E92FE(iLocal_190, 0))
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_190, 1))
					{
						unk_0xF0059F27F7BB6680(&iLocal_190, 1);
					}
					else
					{
						iLocal_190 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_181, vLocal_182, fLocal_183, 0, true, 0);
				bVar1 = unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_178, vLocal_179, fLocal_180, 0, true, 0);
				if (unk_0x3362CDE8460ED38B(sLocal_177, "right_"))
				{
					if (bVar1)
					{
						sLocal_177 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_177 = "right_";
					iVar2 = 1;
				}
				if ((unk_0x77FC50899603581D(iLocal_174) && unk_0x8FD30584EB38411B(iLocal_174) > 0.9f) || iVar2)
				{
					if (iLocal_190 == 0)
					{
						unk_0xA4E856A8CD53B8DF(iLocal_67);
						iLocal_176++;
						if (iLocal_176 >= 3)
						{
							iLocal_176 = 0;
						}
						StringCopy(&cVar3, sLocal_177, 24);
						StringConCat(&cVar3, sLocal_175[iLocal_176], 24);
						iLocal_174 = unk_0xD0D858E538FD01C3(vLocal_187, vLocal_188, 2);
						unk_0xB62398E536F695FC(iLocal_67, iLocal_174, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0xF0059F27F7BB6680(&iLocal_190, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_191 <= 20f)
					{
						fLocal_191 = (fLocal_191 + unk_0x11F9F9006143871A());
					}
					if ((unk_0x105601648511CC64() - iLocal_173) > 5000 && iLocal_190 == 0)
					{
						if (SYSTEM::VDIST2(vLocal_52, vLocal_53) < (22.2f * 22.2f))
						{
							if (fLocal_191 < 10f)
							{
								if (iLocal_192)
								{
									sVar4 = "REPAP_SHT1";
								}
								else
								{
									sVar4 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar4 = "REPAP_PRT";
							}
							if (func_19() == 1)
							{
								func_17(&Local_139, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_139, 1, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_139, 1, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_139, cLocal_133, sVar4, 4, 0, 0, 0))
							{
								iLocal_192 = 1;
								if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_67, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0xA4E856A8CD53B8DF(iLocal_67);
									StringCopy(&cVar5, sLocal_177, 24);
									StringConCat(&cVar5, "come_here", 24);
									iLocal_174 = unk_0xD0D858E538FD01C3(vLocal_187, vLocal_188, 2);
									unk_0xB62398E536F695FC(iLocal_67, iLocal_174, "random@paparazzi@peek", &cVar5, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0xF0059F27F7BB6680(&iLocal_190, 0);
								}
								iLocal_173 = unk_0x105601648511CC64();
							}
						}
					}
				}
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_184, vLocal_185, fLocal_186, 0, true, 0) && iLocal_190 == 0)
				{
					if (unk_0x2DA8CA50A72528FB(iLocal_120))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_120);
						if (!unk_0x2DA8CA50A72528FB(iLocal_121))
						{
							iLocal_121 = func_180(iLocal_67, 0, 145);
						}
					}
					unk_0xA4E856A8CD53B8DF(iLocal_67);
					iLocal_174 = unk_0xD0D858E538FD01C3(vLocal_187, vLocal_188, 2);
					if (bVar1)
					{
						unk_0xB62398E536F695FC(iLocal_67, iLocal_174, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0xB62398E536F695FC(iLocal_67, iLocal_174, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0xF0059F27F7BB6680(&iLocal_190, 0);
					iLocal_130++;
				}
				break;
			
			case 2:
				if (unk_0x77FC50899603581D(iLocal_174) && unk_0x8FD30584EB38411B(iLocal_174) > 0.9f)
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_67, 242628503) != 1)
					{
						unk_0xA4E856A8CD53B8DF(iLocal_67);
						unk_0xE896C0AD02364F2A(iLocal_67, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_170 = 2;
						SYSTEM::SETTIMERA(0);
					}
					iLocal_130++;
				}
				break;
			
			case 3:
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (func_177())
					{
						unk_0x1E7A09C1710FB071(&iLocal_70);
						iLocal_70 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						unk_0x77815D3407C6700D(iLocal_70, true, 1);
						unk_0xD38EB677CBE7440A(iLocal_70, false, 0);
						unk_0xD421BC740C5340C3(iLocal_70, 1);
						bLocal_129 = true;
					}
				}
				if (!bLocal_129)
				{
					unk_0xD421BC740C5340C3(iLocal_70, 1);
					if (func_139(&Local_139, cLocal_133, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						bLocal_194 = true;
						iLocal_130 = 100;
					}
				}
				else if (func_139(&Local_139, cLocal_133, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					bLocal_194 = true;
					iLocal_130++;
				}
				if (SYSTEM::TIMERA() > 2000)
				{
					func_176(vLocal_68, 1);
				}
				break;
			
			case 4:
				func_49();
				if (unk_0xE59B7F5A03335350(iLocal_70, 0))
				{
					if (unk_0xE642C1AC73CE364E(iLocal_70, iLocal_67, Global_13 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_129)
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_67, 242628503) != 1 && !iLocal_189)
						{
							unk_0xC5A6DFE2B8987B17(&iVar6);
							unk_0x346129B364057FF6(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 1048576000, 0, 1193033728);
							unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
							unk_0x535008C596714F9E(iVar6);
							unk_0xA8E6405305C0D7DF(iLocal_67, iVar6);
							unk_0x2EB4D46478766D87(iLocal_67, 0, 0);
							unk_0x02DAF06EA4F08219(&iVar6);
							iLocal_189 = 1;
						}
						else
						{
							unk_0xDBA0F5674ACCE43C(iLocal_67, 1f);
							func_176(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_176(vLocal_68, 1);
					}
					if (!bLocal_129)
					{
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_70, 0))
						{
							if (unk_0x2DA8CA50A72528FB(iLocal_122))
							{
								unk_0x07B8ECB35A4ED3AC(&iLocal_122);
							}
							if (!unk_0x2DA8CA50A72528FB(iLocal_121))
							{
								iLocal_121 = func_180(iLocal_67, 0, 145);
							}
						}
					}
					if ((unk_0xE642C1AC73CE364E(iLocal_70, iLocal_67, Global_13, 0, 1, 0) && func_170(iLocal_70)) && (SYSTEM::TIMERA() > 6000 || !bLocal_129))
					{
						if (!iLocal_172)
						{
							func_102();
							if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_172 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_172 = 1;
									}
								}
								else if (func_5(&Local_139, cLocal_133, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_172 = 1;
							}
						}
						else
						{
							if (!bLocal_129)
							{
								iLocal_130 = -5;
							}
							else
							{
								iLocal_130++;
							}
							unk_0xA4E856A8CD53B8DF(iLocal_67);
							unk_0xD179FA0466FA4FE3(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_129)
				{
					func_176(vLocal_68, 1);
				}
				else
				{
					func_176(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0xE59B7F5A03335350(iLocal_70, 0))
				{
					if (func_152(iLocal_70, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_130 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0xE59B7F5A03335350(iLocal_70, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_67) && unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 0))
					{
						if (unk_0x2DA8CA50A72528FB(iLocal_121))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_121);
						}
						unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
						func_178(1);
					}
					else
					{
						if (!Global_3 && !bLocal_56)
						{
							if ((unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_70, 0) && !unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 1)) && !unk_0x0C265B3C448E6954(iLocal_70, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, true, 0))
							{
								if (bLocal_129)
								{
									unk_0xABA7AE40608505F2(iLocal_67, 2, true);
									sLocal_132 = "REPAP_GUP";
									func_178(6);
								}
								else
								{
									unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
									unk_0xABA7AE40608505F2(iLocal_67, 2, true);
									sLocal_132 = "REPAP_CP";
									func_178(6);
								}
							}
						}
						if (!unk_0x62F3A07C43FFB568(iLocal_67, iLocal_70, 0))
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_67, -1794415470) != 1)
							{
								unk_0xA4E856A8CD53B8DF(iLocal_67);
								unk_0xD179FA0466FA4FE3(iLocal_67, iLocal_70, -1, func_168(iLocal_70), 1f, 8388608, 0);
							}
							else if (SYSTEM::VDIST(vLocal_53, unk_0xA4455714F3DCE207(iLocal_70, 1f, 0f, 0f)) < 1f)
							{
								unk_0xDBA0F5674ACCE43C(iLocal_67, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0xE59B7F5A03335350(iLocal_70, 0))
				{
					if (!func_73())
					{
						func_102();
						if (func_19() == 1)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_19() == 0)
						{
							func_102();
							if (func_5(&Local_139, cLocal_133, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
							iLocal_60 = 0;
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
				if (iLocal_130 == 101)
				{
					fLocal_195 = 0f;
				}
				func_176(vLocal_68, 1);
				break;
			
			case 101:
				if (SYSTEM::VDIST2(vLocal_52, vLocal_53) < 49f && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 3f)
					{
						fLocal_195 = (fLocal_195 + unk_0x11F9F9006143871A());
					}
					else
					{
						fLocal_195 = (fLocal_195 - (unk_0x11F9F9006143871A() * 2f));
					}
					if (fLocal_195 > 10f)
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_195 = 0f;
						}
					}
				}
				if (unk_0xE59B7F5A03335350(iLocal_70, 0))
				{
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_70, 0) && func_177())
					{
						bLocal_129 = true;
						iLocal_60 = 1;
						iLocal_70 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						unk_0x77815D3407C6700D(iLocal_70, true, 1);
					}
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_70, 0))
					{
						if (unk_0x2DA8CA50A72528FB(iLocal_122))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_122);
						}
						if (!unk_0x2DA8CA50A72528FB(iLocal_121))
						{
							iLocal_121 = func_180(iLocal_67, 0, 145);
						}
					}
					else
					{
						if (unk_0x2DA8CA50A72528FB(iLocal_121))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_121);
						}
						if (!unk_0x2DA8CA50A72528FB(iLocal_122))
						{
							iLocal_122 = func_166(iLocal_70, 0, 0);
						}
					}
					if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iLocal_70))
					{
						if (unk_0x2DA8CA50A72528FB(iLocal_122))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_122);
						}
						if (!unk_0x2DA8CA50A72528FB(iLocal_121))
						{
							iLocal_121 = func_180(iLocal_67, 0, 145);
						}
						func_179("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_130 = 4;
					}
					if (!iLocal_60)
					{
						if (SYSTEM::VDIST2(vLocal_52, vLocal_54) < 9f && func_19() == 0)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_60 = 1;
							}
						}
					}
				}
				func_176(vLocal_68, 1);
				break;
		}
		if (!Global_3 && !bLocal_56)
		{
			if (unk_0xE59B7F5A03335350(iLocal_70, 0))
			{
				if (SYSTEM::VDIST(vLocal_52, vLocal_68) > 75f)
				{
					func_178(6);
				}
				if (func_191())
				{
					func_178(5);
				}
			}
		}
		if (!bLocal_129)
		{
			if (!unk_0xE59B7F5A03335350(iLocal_70, 0))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_178(5);
				}
			}
			else
			{
				if (!bLocal_129)
				{
					if (!Global_3 && !bLocal_56)
					{
						if (unk_0x8D66276473ABD7CC(iLocal_70) < iLocal_64)
						{
							if (unk_0xD9C1758D86688CEA(iLocal_70, unk_0xBC25C936A095B5BA(), 1))
							{
								iLocal_65 = (iLocal_65 + (iLocal_64 - unk_0x8D66276473ABD7CC(iLocal_70)));
							}
							unk_0x5502708AECB47F5D(iLocal_70);
						}
						if (iLocal_65 > 250)
						{
							if (unk_0x5CEC84BB4AC55121(iLocal_67, iLocal_70) && SYSTEM::VDIST(vLocal_53, vLocal_54) < 25f)
							{
								func_178(5);
							}
						}
					}
				}
				iLocal_64 = unk_0x8D66276473ABD7CC(iLocal_70);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_67))
		{
			if (unk_0x889DA6CE8E4DB344(iLocal_67))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_178(5);
				}
			}
		}
	}
}

void func_176(vector3 vParam0, bool bParam1)//Position - 0xBA46
{
	if (SYSTEM::VDIST(vLocal_53, vParam0) > 2.5f)
	{
		if (unk_0xF4FCC3C1048FF2AB(iLocal_67, 713668775) != 1)
		{
			unk_0x346129B364057FF6(iLocal_67, vParam0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0xF4FCC3C1048FF2AB(iLocal_67, 713668775) != 1)
	{
		func_136(bParam1);
		unk_0x56F2E1B5599188FA(iLocal_67, unk_0xBC25C936A095B5BA(), -1, 16, 2);
	}
}

bool func_177()//Position - 0xBAAF
{
	return (((((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0)) && (unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))) || unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))))) && unk_0x524ABB0435146845(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) > 0) && func_170(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))) && !Global_1974B);
}

void func_178(int iParam0)//Position - 0xBB30
{
	iLocal_45 = iParam0;
	iLocal_130 = 0;
}

void func_179(char* sParam0)//Position - 0xBB40
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (!unk_0x3362CDE8460ED38B(iLocal_144[iVar0], sParam0))
		{
			if (unk_0x144E80F5C46A6B75(iLocal_144[iVar0]))
			{
				unk_0xC1300D0F3A74E20B(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (unk_0x3362CDE8460ED38B(iLocal_144[iVar0], sParam0))
		{
			if (!unk_0x144E80F5C46A6B75(iLocal_144[iVar0]))
			{
				unk_0xD6423910AAD8A379(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_180(int iParam0, bool bParam1, int iParam2)//Position - 0xBBC5
{
	int iVar0;
	
	iVar0 = func_167(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_181(int iParam0)//Position - 0xBC17
{
	if (func_184())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_88(Global_19AF9))
		{
			func_182(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_88(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_182(int iParam0)//Position - 0xBC6A
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_163(func_183(iParam0), -1);
					Global_19B04.f_6186.f_2++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(Global_19B00, 1))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_163(func_183(iParam0), -1);
					Global_19B04.f_6186.f_3++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(Global_19B00, 2))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_163(func_183(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

char* func_183(int iParam0)//Position - 0xBD4B
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_184()//Position - 0xBD8D
{
	switch (func_185(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_185(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xBDC3
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_161D2.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_189(0))
		{
			return 0;
		}
		Global_8C1D++;
		*uParam0 = Global_8C1D;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_4336.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_8C41 = iParam2;
		Global_8C1B = *uParam0;
		Global_8C1C = iParam4;
		Global_8C1A = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_8C1A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8C1A)
			{
				if (Global_8C20[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8C1B == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_187(iParam2))
		{
			return 0;
		}
		if (Global_8C1A == 8)
		{
			return 0;
		}
		Global_8C1D++;
		*uParam0 = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/] = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/].f_1 = iParam1;
		Global_8C20[Global_8C1A /*4*/].f_2 = iParam2;
		Global_8C20[Global_8C1A /*4*/].f_3 = 0;
		Global_8C1A++;
		if (iParam4 != 0)
		{
			func_186(uParam0, iParam4);
		}
	}
	return 2;
}

void func_186(var uParam0, int iParam1)//Position - 0xBEFA
{
	int iVar0;
	
	if (Global_8C1A == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_8C1A)
	{
		if (Global_8C20[iVar0 /*4*/] == *uParam0)
		{
			Global_8C20[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_187(int iParam0)//Position - 0xBF49
{
	return func_188(iParam0, Global_8C41);
}

int func_188(int iParam0, int iParam1)//Position - 0xBF5A
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_189(int iParam0)//Position - 0xC157
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_187(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_190()//Position - 0xC179
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_67))
	{
		unk_0xABA7AE40608505F2(iLocal_67, 2, false);
		unk_0x5558ED6D4A2DEC93(iLocal_67, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (!unk_0x36CEFBE9B745A58D(Local_109[iVar0 /*18*/]))
		{
			unk_0x5558ED6D4A2DEC93(Local_109[iVar0 /*18*/], unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
			unk_0x4106FAF8AA1D69D5(Local_109[iVar0 /*18*/], -2065892691);
			unk_0x2E35C4FA5F0ED22F(Local_109[iVar0 /*18*/], false);
		}
		iVar0++;
	}
}

int func_191()//Position - 0xC1F6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_109)
	{
		if (unk_0x724D816EA203A79E(Local_109[iVar1 /*18*/]) && !unk_0x36CEFBE9B745A58D(Local_109[iVar1 /*18*/]))
		{
			if (unk_0x8F6EAC9E7D6812D5(Local_109[iVar1 /*18*/]))
			{
				if (((unk_0x04880508C862E589(Local_109[iVar1 /*18*/].f_6, 5f, 1) || unk_0xC9FA5D38428AB6BE(-1, Local_109[iVar1 /*18*/].f_6, 10f)) || unk_0x889DA6CE8E4DB344(Local_109[iVar1 /*18*/])) || (iLocal_138[iVar1] > 10 && iLocal_45 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_110 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_108)
	{
		if (unk_0x724D816EA203A79E(Local_108[iVar1 /*18*/]))
		{
			if (unk_0xE59B7F5A03335350(Local_108[iVar1 /*18*/], 0) && unk_0x8F6EAC9E7D6812D5(Local_108[iVar1 /*18*/]))
			{
				if (unk_0x7544D2465B934445(Local_108[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_192()//Position - 0xC2F0
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_203())
		{
			return 0;
		}
	}
	if (func_199())
	{
		return 1;
	}
	if (func_193(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_193(float fParam0, bool bParam1)//Position - 0xC376
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (func_21(func_19()))
		{
			iVar5 = func_93();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_194(iVar1, &Var0);
					fVar4 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_194(int iParam0, var uParam1)//Position - 0xC42D
{
	switch (iParam0)
	{
		case 0:
			func_195(uParam1, "Abigail1", func_197(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 1:
			func_195(uParam1, "Abigail2", func_197(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 2:
			func_195(uParam1, "Barry1", func_197(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 3:
			func_195(uParam1, "Barry2", func_197(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 4:
			func_195(uParam1, "Barry3", func_197(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 5:
			func_195(uParam1, "Barry3A", func_197(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 6:
			func_195(uParam1, "Barry3C", func_197(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 7:
			func_195(uParam1, "Barry4", func_197(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_196(iParam0), 0, 0);
			break;
		
		case 8:
			func_195(uParam1, "Dreyfuss1", func_197(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 9:
			func_195(uParam1, "Epsilon1", func_197(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 10:
			func_195(uParam1, "Epsilon2", func_197(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 11:
			func_195(uParam1, "Epsilon3", func_197(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 12:
			func_195(uParam1, "Epsilon4", func_197(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 13:
			func_195(uParam1, "Epsilon5", func_197(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 14:
			func_195(uParam1, "Epsilon6", func_197(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 15:
			func_195(uParam1, "Epsilon7", func_197(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 16:
			func_195(uParam1, "Epsilon8", func_197(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 17:
			func_195(uParam1, "Extreme1", func_197(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 18:
			func_195(uParam1, "Extreme2", func_197(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 19:
			func_195(uParam1, "Extreme3", func_197(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 20:
			func_195(uParam1, "Extreme4", func_197(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 21:
			func_195(uParam1, "Fanatic1", func_197(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_196(iParam0), 1, 0);
			break;
		
		case 22:
			func_195(uParam1, "Fanatic2", func_197(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_196(iParam0), 1, 0);
			break;
		
		case 23:
			func_195(uParam1, "Fanatic3", func_197(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_196(iParam0), 0, 1);
			break;
		
		case 24:
			func_195(uParam1, "Hao1", func_197(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_196(iParam0), 0, 1);
			break;
		
		case 25:
			func_195(uParam1, "Hunting1", func_197(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 26:
			func_195(uParam1, "Hunting2", func_197(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 27:
			func_195(uParam1, "Josh1", func_197(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 28:
			func_195(uParam1, "Josh2", func_197(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 29:
			func_195(uParam1, "Josh3", func_197(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 30:
			func_195(uParam1, "Josh4", func_197(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 31:
			func_195(uParam1, "Maude1", func_197(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 32:
			func_195(uParam1, "Minute1", func_197(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 33:
			func_195(uParam1, "Minute2", func_197(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 34:
			func_195(uParam1, "Minute3", func_197(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 35:
			func_195(uParam1, "MrsPhilips1", func_197(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 36:
			func_195(uParam1, "MrsPhilips2", func_197(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 37:
			func_195(uParam1, "Nigel1", func_197(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 38:
			func_195(uParam1, "Nigel1A", func_197(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 39:
			func_195(uParam1, "Nigel1B", func_197(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 40:
			func_195(uParam1, "Nigel1C", func_197(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 41:
			func_195(uParam1, "Nigel1D", func_197(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 42:
			func_195(uParam1, "Nigel2", func_197(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 43:
			func_195(uParam1, "Nigel3", func_197(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 44:
			func_195(uParam1, "Omega1", func_197(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 45:
			func_195(uParam1, "Omega2", func_197(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 46:
			func_195(uParam1, "Paparazzo1", func_197(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 47:
			func_195(uParam1, "Paparazzo2", func_197(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 48:
			func_195(uParam1, "Paparazzo3", func_197(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 49:
			func_195(uParam1, "Paparazzo3A", func_197(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 50:
			func_195(uParam1, "Paparazzo3B", func_197(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 51:
			func_195(uParam1, "Paparazzo4", func_197(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 52:
			func_195(uParam1, "Rampage1", func_197(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 54:
			func_195(uParam1, "Rampage3", func_197(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 55:
			func_195(uParam1, "Rampage4", func_197(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 56:
			func_195(uParam1, "Rampage5", func_197(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 53:
			func_195(uParam1, "Rampage2", func_197(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 57:
			func_195(uParam1, "TheLastOne", func_197(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 58:
			func_195(uParam1, "Tonya1", func_197(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 59:
			func_195(uParam1, "Tonya2", func_197(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 60:
			func_195(uParam1, "Tonya3", func_197(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 61:
			func_195(uParam1, "Tonya4", func_197(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 62:
			func_195(uParam1, "Tonya5", func_197(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_195(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xD5A2
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_196(int iParam0)//Position - 0xD633
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_197(int iParam0)//Position - 0xD979
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_198(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_198(int iParam0)//Position - 0xD9AF
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_199()//Position - 0xDDFA
{
	if (func_202() && !func_203())
	{
		return 1;
	}
	if (func_201() && func_200())
	{
		return 1;
	}
	return 0;
}

bool func_200()//Position - 0xDE2C
{
	return Global_199EA > 0;
}

int func_201()//Position - 0xDE3A
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_202()//Position - 0xDE4F
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_203()//Position - 0xDE75
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x45397F173D3E5C6B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_204()//Position - 0xDE92
{
	func_206(39, 1);
	func_206(40, 1);
	func_206(41, 1);
	func_206(42, 1);
	func_206(43, 1);
	func_206(44, 1);
	iLocal_120 = func_205(vLocal_68);
	iLocal_67 = unk_0x01B3635C3E8EDD81(26, joaat("a_f_y_bevhills_03"), vLocal_68, fLocal_69, 1, true);
	unk_0x91629AC1E1F78419(iLocal_67, 1, true);
	unk_0x91629AC1E1F78419(iLocal_67, 17, true);
	unk_0xABA7AE40608505F2(iLocal_67, 128, true);
	unk_0x22321800954A532E(iLocal_67, true);
	unk_0x0130A557FECA322C(iLocal_67, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_67, 0, 0, 1, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_67, 2, 0, 0, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_67, 3, 0, 0, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_67, 4, 0, 0, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_67, 7, 1, 0, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_67, 8, 0, 0, 0);
	unk_0x508DCA0082E9A457(iLocal_67, 1);
	unk_0x2E35C4FA5F0ED22F(iLocal_67, true);
	unk_0xB105531EDD3DE51B(iLocal_67, false);
	unk_0x36C3B58DA78A2679(iLocal_67, "LACEY");
	if (Global_3 || bLocal_56)
	{
		unk_0x1E5C2A1EAB944289(iLocal_67, true);
	}
	if (unk_0xB2CB6EAA6B280A84("CELEBRITY", &iLocal_55))
	{
		unk_0x4106FAF8AA1D69D5(iLocal_67, iLocal_55);
	}
	iLocal_70 = unk_0x61C05BF08A1E0EFE(joaat("surano"), vLocal_71, fLocal_72, true, true, false);
	unk_0xD5874E4A4BF782FC(iLocal_70, vLocal_71, 0, 0, 1);
	unk_0xC239B590ECA50DD0(iLocal_70, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0xD38EB677CBE7440A(iLocal_70, false, 0);
	unk_0x6012A6A4F2950585(iLocal_70, 10);
	unk_0xF0A40F19AAB79E88(iLocal_70, 1084227584);
	unk_0xD421BC740C5340C3(iLocal_70, 3);
	unk_0x6FA721E3E050370C(iLocal_70, 1);
	unk_0x092EAEDB8CF7A1AA(iLocal_70, 1);
	unk_0x004811915F93A42D(iLocal_70, unk_0x4D8215BCA285185C(1));
	if (func_19() == 1)
	{
		func_17(&Local_139, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_139, 1, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_139, 1, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
	}
	func_17(&Local_139, 3, iLocal_67, "LACEY", 0, 1);
	iLocal_136[0] = "idle_a";
	iLocal_136[1] = "idle_b";
	iLocal_136[2] = "idle_c";
	iLocal_136[3] = "idle_d";
	iLocal_136[4] = "idle_e";
	iLocal_136[5] = "idle_f";
	iLocal_136[6] = "idle_g";
	iLocal_136[7] = "idle_h";
	iLocal_136[8] = "idle_i";
	iLocal_144[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_144[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_144[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0x8510BC031C24B862(joaat("vader"), true);
	unk_0x8510BC031C24B862(joaat("surano"), true);
	unk_0x8510BC031C24B862(joaat("cavalcade2"), true);
}

int func_205(vector3 vParam0)//Position - 0xE0FC
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x7781946F1FC054FA(iVar0, 0);
	unk_0x2E9308F22ABD4DF5(iVar0, 0);
	return iVar0;
}

void func_206(int iParam0, bool bParam1)//Position - 0xE11E
{
	if (bParam1)
	{
		if (!func_213(iParam0, 2, 1))
		{
			func_212(iParam0, 2, 1);
		}
	}
	else if (func_213(iParam0, 2, 1))
	{
		func_207(iParam0, 2, 1);
	}
}

void func_207(int iParam0, int iParam1, bool bParam2)//Position - 0xE155
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_83() == 0)
		{
			iVar0 = func_210(func_211(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_208(func_211(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xE1BE
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_209(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_209(var uParam0)//Position - 0xE1EE
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_86();
		if (iVar1 > -1)
		{
			Global_269AA6 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_269AA6 = 1;
		}
	}
	return iVar0;
}

int func_210(int iParam0, int iParam1, int iParam2)//Position - 0xE222
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_209(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_211(int iParam0)//Position - 0xE254
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 7779;
			break;
		
		case 45:
			return 3804;
			break;
		
		case 46:
			return 5379;
			break;
		
		case 47:
			return 6151;
			break;
		
		case 48:
			return 7228;
			break;
		
		default:
			break;
	}
	return 8804;
}

void func_212(int iParam0, int iParam1, bool bParam2)//Position - 0xE548
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_83() == 0)
		{
			iVar0 = func_210(func_211(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_208(func_211(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_213(int iParam0, int iParam1, bool bParam2)//Position - 0xE5B1
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_83() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_210(func_211(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_214()//Position - 0xE611
{
	if (!iLocal_73)
	{
		func_222(&uLocal_74, joaat("surano"));
		func_222(&uLocal_74, joaat("prop_ld_test_01"));
		func_222(&uLocal_74, joaat("a_f_y_bevhills_03"));
		func_222(&uLocal_74, joaat("a_m_y_genstreet_02"));
		func_222(&uLocal_74, joaat("vader"));
		func_222(&uLocal_74, joaat("cavalcade2"));
		func_222(&uLocal_74, joaat("prop_pap_camera_01"));
		func_219(&uLocal_74);
		iLocal_73 = 1;
	}
	if (!func_215(&uLocal_74))
	{
		return 0;
	}
	unk_0x522053D86D6E1C7A("random@escape_paparazzi@standing@");
	unk_0x522053D86D6E1C7A("random@paparazzi@pap_anims");
	unk_0x522053D86D6E1C7A("random@paparazzi@peek");
	unk_0x522053D86D6E1C7A("random@paparazzi@trans");
	unk_0x522053D86D6E1C7A("random@paparazzi@wait");
	unk_0x522053D86D6E1C7A("veh@std@ps@idle_panic");
	unk_0x522053D86D6E1C7A("veh@low@front_ps@idle_panic");
	unk_0x522053D86D6E1C7A(sLocal_135);
	unk_0x900CF084251DED26("ESCPAP", 0);
	if (((((((((unk_0xF9E082857622D91E("random@escape_paparazzi@standing@") && unk_0xF9E082857622D91E("random@paparazzi@pap_anims")) && unk_0xF9E082857622D91E("random@paparazzi@peek")) && unk_0xF9E082857622D91E("random@paparazzi@trans")) && unk_0xF9E082857622D91E("random@paparazzi@wait")) && unk_0xF9E082857622D91E("veh@std@ps@idle_panic")) && unk_0xF9E082857622D91E("veh@low@front_ps@idle_panic")) && unk_0xF9E082857622D91E(sLocal_135)) && unk_0xFA9040D29FE330BD(0)) && unk_0x284F2ACE6839D3C0("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0)//Position - 0xE74C
{
	int iVar0;
	
	if (!uParam0->f_1F)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_216(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_1F = 0;
	return 1;
}

bool func_216(var uParam0)//Position - 0xE7AE
{
	return func_217(*uParam0, "NULL", uParam0->f_1);
}

int func_217(int iParam0, char* sParam1, int iParam2)//Position - 0xE7C3
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, 29))
		{
			switch (func_218(iParam0))
			{
				case 0:
					return unk_0xD6513D668481290A(iParam2);
					break;
				
				case 1:
					return unk_0xF9E082857622D91E(sParam1);
					break;
				
				case 2:
					return unk_0x320539481B2F0121(sParam1);
					break;
				
				case 3:
					return unk_0x499783D01578C2D2(sParam1);
					break;
				
				case 4:
					return unk_0x00D24B3F2A5CD22C(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1E8349F219AC5AF9(sParam1);
					break;
				
				case 6:
					return unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xFEAEF0BFEF7FED8A(iParam2);
					break;
				
				case 8:
					return unk_0xFA9040D29FE330BD(iParam2);
					break;
				
				case 9:
					return unk_0x95654D7A61CD43DE();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xE8B7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_219(var uParam0)//Position - 0xE8E3
{
	func_220(uParam0, 9, -1, 0);
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE8F5
{
	int iVar0;
	
	if (!func_221(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_1F)
	{
		uParam0->f_1F = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*2*/], iParam1);
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_221(int iParam0)//Position - 0xE9B8
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_222(var uParam0, int iParam1)//Position - 0xEA57
{
	func_220(uParam0, 0, iParam1, 0);
}

int func_223()//Position - 0xEA69
{
	if (!func_187(5))
	{
		return 1;
	}
	if (func_199())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_203())
		{
			return 0;
		}
	}
	if (func_193(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_224()//Position - 0xEACB
{
	if ((Global_19AF9 == func_97() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

void func_225(var uParam0)//Position - 0xEAF6
{
	int iVar0;
	
	if (uParam0->f_1F)
	{
		if ((unk_0xC87A57742F7D3C06() >= (uParam0->f_20 + uParam0->f_21) || unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 2)) || unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 29))
					{
						func_226(uParam0[iVar0 /*2*/]);
						uParam0->f_20 = unk_0xC87A57742F7D3C06();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_226(int iParam0)//Position - 0xEB80
{
	func_227(iParam0, "NULL", iParam0->f_1);
}

void func_227(int iParam0, char* sParam1, int iParam2)//Position - 0xEB94
{
	if (unk_0xFA30DFD0084E92FE(*iParam0, 30))
	{
		switch (func_218(*iParam0))
		{
			case 0:
				unk_0xF243B7A14FCFD0F4(iParam2);
				break;
			
			case 1:
				unk_0x522053D86D6E1C7A(sParam1);
				break;
			
			case 2:
				unk_0x37FA5A8A7F1136BA(sParam1);
				break;
			
			case 3:
				unk_0x8AA3F48A15444B98(sParam1, unk_0xFA30DFD0084E92FE(*iParam0, 28));
				break;
			
			case 4:
				unk_0x1B2A7C8188ADBE04(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x44840FD68E426678(sParam1);
				break;
			
			case 6:
				unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x381A61AE1A1DAD09(iParam2);
				break;
			
			case 8:
				unk_0x900CF084251DED26(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xA8396BF0E2C53C39();
				break;
			
			default:
				break;
		}
		unk_0xF0059F27F7BB6680(iParam0, 29);
	}
}

void func_228(int iParam0)//Position - 0xEC6E
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_230(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_229();
}

void func_229()//Position - 0xECA4
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x8510BC031C24B862(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)), true);
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
	}
}

void func_230(int iParam0)//Position - 0xECE1
{
	Global_19AF9 = iParam0;
}

int func_231(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xECEF
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_230F1)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_97();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_272())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_203())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_78(0))
		{
			return 0;
		}
		if (func_199())
		{
			return 0;
		}
		if (func_271())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_193(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_270(iParam1))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_269(func_19()) == 4 || func_269(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_268(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_267(Global_19B04.f_6186.f_2B[iParam1]))
		{
			return 0;
		}
		if ((unk_0x105601648511CC64() - Global_19AFB) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_266())
		{
			return 0;
		}
		if (unk_0x04604C9E42BD0E47())
		{
			return 0;
		}
		if (unk_0x8520DF5301DD9811())
		{
			return 0;
		}
		if (!func_257(4))
		{
			return 0;
		}
		if (!func_187(5))
		{
			return 0;
		}
		if (func_256(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xBF697FA7422C0621(unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA())))
		{
			if ((unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(377.153f, -717.567f, 10.0536f) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(320.9934f, 265.2515f, 82.1221f)) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_256(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_270(30) && !func_256(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_21(func_19()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_255(iVar4))
				{
					if (func_233(iVar2))
					{
						if (!func_232(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_19() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_232(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xF089
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_233(int iParam0)//Position - 0xF0D0
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_234(iVar0);
}

int func_234(int iParam0)//Position - 0xF0F1
{
	return func_235(iParam0, 1);
}

int func_235(int iParam0, int iParam1)//Position - 0xF100
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_255(iParam0))
	{
		return 0;
	}
	func_236(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_236(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xF153
{
	func_237(func_248(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_237(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xF171
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_247(iParam0, iParam1))
	{
		iVar0 = func_246(iParam1);
		iVar1 = func_244(iParam0);
		iVar2 = (func_244(iParam0) - func_244(iParam1));
		iVar3 = (func_246(iParam0) - func_246(iParam1));
		iVar4 = (func_243(iParam0) - func_243(iParam1));
		iVar5 = (func_242(iParam0) - func_242(iParam1));
		iVar6 = (func_241(iParam0) - func_241(iParam1));
		iVar7 = (func_240(iParam0) - func_240(iParam1));
	}
	else
	{
		iVar0 = func_246(iParam0);
		iVar1 = func_244(iParam1);
		iVar2 = (func_244(iParam1) - func_244(iParam0));
		iVar3 = (func_246(iParam1) - func_246(iParam0));
		iVar4 = (func_243(iParam1) - func_243(iParam0));
		iVar5 = (func_242(iParam1) - func_242(iParam0));
		iVar6 = (func_241(iParam1) - func_241(iParam0));
		iVar7 = (func_240(iParam1) - func_240(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_239(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_238(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_238(float fParam0, float fParam1, float fParam2)//Position - 0xF372
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_239(int iParam0, int iParam1)//Position - 0xF3B4
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_240(int iParam0)//Position - 0xF456
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_241(int iParam0)//Position - 0xF469
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_242(int iParam0)//Position - 0xF47C
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_243(int iParam0)//Position - 0xF48F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_244(int iParam0)//Position - 0xF4A1
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_245(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_245(bool bParam0, int iParam1, int iParam2)//Position - 0xF4C6
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_246(int iParam0)//Position - 0xF4DD
{
	return iParam0 & 15;
}

int func_247(int iParam0, int iParam1)//Position - 0xF4EA
{
	int iVar0;
	int iVar1;
	
	if (!func_255(iParam1) || !func_255(iParam0))
	{
		return 1;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_248()//Position - 0xF5F6
{
	var uVar0;
	
	func_254(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_253(&uVar0, unk_0x7E09057438B9D216());
	func_252(&uVar0, unk_0x6E06C0DB9B43570D());
	func_251(&uVar0, unk_0xBE14F159908E4EE5());
	func_250(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_249(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_249(var uParam0, int iParam1)//Position - 0xF63C
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_250(var uParam0, int iParam1)//Position - 0xF6C2
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_251(var uParam0, int iParam1)//Position - 0xF6F5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_246(*uParam0);
	iVar1 = func_244(*uParam0);
	if (iParam1 < 1 || iParam1 > func_239(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_252(var uParam0, int iParam1)//Position - 0xF746
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_253(var uParam0, int iParam1)//Position - 0xF780
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_254(var uParam0, int iParam1)//Position - 0xF7BB
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_255(int iParam0)//Position - 0xF7F7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_241(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_242(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_244(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_246(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_243(iParam0);
	if (iVar5 < 1 || iVar5 > func_239(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0, int iParam1)//Position - 0xF8D3
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)//Position - 0xF8F6
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_19();
				if (!func_21(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_265()) || Global_1974B) || Global_62BF) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_261()) || func_260()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_265()) || Global_62BF) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_265()) || Global_1974B) || Global_62BF) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_265()) || Global_1974B) || Global_62BF) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_260()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_265() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_14(8, -1)) || func_260()) || func_259()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_263()) || func_262()) || func_259()) || func_258())
						{
							return 0;
						}
						if ((unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() != 3) && unk_0x5935088CFB983803() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
						{
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_265()) || Global_62BF) || func_264()) || func_14(8, -1)) || func_262()) || func_261()) || func_260()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_265()) || func_262()) || Global_1974B) || Global_62BF) || func_264()) || Global_90C1) || func_14(8, -1)) || func_261()) || func_259()) || func_260()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_265()) || Global_1974B) || Global_62BF) || func_264()) || func_14(8, -1)) || func_261()) || func_259()) || func_263()) || func_262()) || func_260())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_258()//Position - 0x10015
{
	return Global_16B42.f_1;
}

int func_259()//Position - 0x10023
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_260()//Position - 0x10049
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_261()//Position - 0x10063
{
	if (Global_11646)
	{
		return 1;
	}
	else if (Global_DA99 && !Global_DA9F)
	{
		return 1;
	}
	return 0;
}

bool func_262()//Position - 0x1008D
{
	return Global_16B4F.f_142 > 0;
}

bool func_263()//Position - 0x1009E
{
	return Global_16B4F.f_141 > 0;
}

var func_264()//Position - 0x100AF
{
	return Global_140856;
}

int func_265()//Position - 0x100BB
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_266()//Position - 0x100D7
{
	func_11();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_267(int iParam0)//Position - 0x100FF
{
	return func_247(func_248(), iParam0);
}

int func_268(int iParam0, int iParam1, int iParam2)//Position - 0x10111
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_19();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_269(int iParam0)//Position - 0x101F5
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_270(int iParam0)//Position - 0x10219
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_272())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_19B04.f_6186, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_1, iVar0);
	}
	return bVar1;
}

int func_271()//Position - 0x10277
{
	int iVar0;
	
	if (Global_6353)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x3187EF5798B5D209(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_272()//Position - 0x102BB
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xF0059F27F7BB6680(&iVar0, 2);
				unk_0xF0059F27F7BB6680(&iVar0, 4);
				unk_0xF0059F27F7BB6680(&iVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_19, 2);
				unk_0xF0059F27F7BB6680(&Global_19, 4);
				unk_0xF0059F27F7BB6680(&Global_19, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_231F0 == 2)
	{
		return 1;
	}
	else if (Global_231F0 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_273(var uParam0, int iParam1)//Position - 0x10376
{
	if (iParam1 > 0)
	{
		uParam0->f_21 = iParam1;
	}
}

void func_274()//Position - 0x1038D
{
	func_292(0);
	unk_0x832ADB79A274D4E9(-90f, -1488f, -50f, 55f, -1470f, 50f, true);
	unk_0xD0FC9D284379BED4("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_287(&uLocal_74, 0);
	unk_0x4EA570997E107F35("random@escape_paparazzi@standing@");
	unk_0x4EA570997E107F35("random@paparazzi@pap_anims");
	unk_0x4EA570997E107F35("random@paparazzi@peek");
	unk_0x4EA570997E107F35("random@paparazzi@trans");
	unk_0x4EA570997E107F35("random@paparazzi@wait");
	unk_0x4EA570997E107F35("veh@std@ps@idle_panic");
	unk_0x4EA570997E107F35("veh@low@front_ps@idle_panic");
	unk_0x4EA570997E107F35(sLocal_135);
	unk_0xC32C243942383443();
	if (func_224())
	{
		unk_0xDF53A66AEE1401AA(1f);
	}
	if (unk_0x724D816EA203A79E(iLocal_67) && !unk_0x36CEFBE9B745A58D(iLocal_67))
	{
		if (unk_0xD45C08B05D4687A7(iLocal_67))
		{
			unk_0x57EB4CC8F1928A47(iLocal_67);
		}
		if (unk_0x5237AF95232D78C5(iLocal_67, 1))
		{
			if (!unk_0x889DA6CE8E4DB344(iLocal_67))
			{
				unk_0xA3981DED4FC2E56E(iLocal_67, 0, 0);
			}
		}
	}
	func_276(-1);
	unk_0x5499DFC49A11E05F();
	unk_0xA2F21B9C95E0F635(0);
	unk_0x8510BC031C24B862(joaat("vader"), false);
	unk_0x8510BC031C24B862(joaat("surano"), false);
	unk_0x8510BC031C24B862(joaat("cavalcade2"), false);
	unk_0x483687B0FCA5415A(iLocal_126, 0);
	unk_0x483687B0FCA5415A(iLocal_127, 0);
	unk_0x483687B0FCA5415A(iLocal_128, 0);
	unk_0x379ACE23D404525C(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), true, 1);
	if (Global_63AC)
	{
		unk_0x3857DADBD6EC8A54("AC_STOP");
	}
	func_275();
	unk_0x95E4B6F3ED223F5A();
}

void func_275()//Position - 0x104E1
{
	Global_63A8 = 0;
	Global_63A9 = 0;
	Global_63AB = 0;
	Global_63AC = 0;
	Global_63AD = 0;
}

void func_276(int iParam0)//Position - 0x104FD
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_280(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_279(30000);
		StringCopy(&cVar0, func_278(Global_19AF9, 1), 64);
		if (func_96(Global_19AF9) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_19AF8, 64);
		}
		unk_0x3D65262152B53A67(&cVar0, Global_19AF6, (unk_0x105601648511CC64() - Global_19AF7), 0);
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B00, 0) && Global_19B04.f_6186.f_2 < 3)
	{
		unk_0x7CB6FD92BE491AD9(&Global_19B00, 0);
	}
	func_277(&Global_62F8);
	Global_19AFA = 0;
	func_230(-1);
}

void func_277(var uParam0)//Position - 0x105B2
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_8C1B)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_8C1A = 0;
	Global_8C1C = 0;
	Global_8C41 = 15;
	Global_DA9C = 0;
	Global_DA9D = 0;
}

char* func_278(int iParam0, bool bParam1)//Position - 0x105EF
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_279(int iParam0)//Position - 0x10838
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_280(int iParam0)//Position - 0x1084A
{
	func_281(iParam0, 0, func_286(iParam0));
}

void func_281(int iParam0, int iParam1, int iParam2)//Position - 0x1085F
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_248();
	func_284(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_283(iParam0, &uVar0);
	Var1 = { func_282(&uVar0) };
}

struct<16> func_282(var uParam0)//Position - 0x1088E
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_242(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_241(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_240(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_244(*uParam0), 64);
	return Var0;
}

void func_283(int iParam0, var uParam1)//Position - 0x1095D
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10975
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_244(*uParam0);
	iVar1 = func_246(*uParam0);
	iVar2 = func_243(*uParam0);
	iVar3 = func_242(*uParam0);
	iVar4 = func_241(*uParam0);
	iVar5 = func_240(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_239(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_239(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_285(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10AF7
{
	func_254(uParam0, iParam1);
	func_253(uParam0, iParam2);
	func_252(uParam0, iParam3);
	func_250(uParam0, iParam5);
	func_251(uParam0, iParam4);
	func_249(uParam0, iParam6);
}

int func_286(int iParam0)//Position - 0x10B2F
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_287(var uParam0, bool bParam1)//Position - 0x10CD2
{
	int iVar0;
	
	if (!bParam1)
	{
		func_289(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_288(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_1F = 0;
	uParam0->f_20 = -1;
	uParam0->f_21 = 1;
}

void func_288(var uParam0)//Position - 0x10D12
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_289(var uParam0)//Position - 0x10D23
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 30))
		{
			func_290(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_1F = 1;
}

void func_290(var uParam0)//Position - 0x10D5C
{
	func_291(*uParam0, "NULL", uParam0->f_1);
}

void func_291(int iParam0, char* sParam1, int iParam2)//Position - 0x10D71
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		switch (func_218(iParam0))
		{
			case 0:
				unk_0x2CA123B0622F495C(iParam2);
				break;
			
			case 1:
				unk_0x4EA570997E107F35(sParam1);
				break;
			
			case 2:
				unk_0xFC4EC4916831BFC8(sParam1);
				break;
			
			case 3:
				unk_0x786556581D95BCB2(sParam1);
				break;
			
			case 4:
				unk_0x4F5DAC981AF98536(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x4CE01E22F13D3913(sParam1);
				break;
			
			case 6:
				unk_0xC32C243942383443();
				break;
			
			case 7:
				unk_0xE0BCC382FA9C9FF7(iParam2);
				break;
			
			case 8:
				unk_0x841D233D3CE81152(iParam2, unk_0xFA30DFD0084E92FE(iParam0, 26));
				break;
			
			case 9:
				unk_0x8E5F062750135AD1();
				break;
			
			default:
				break;
		}
	}
}

void func_292(bool bParam0)//Position - 0x10E31
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_206(iVar0, bParam0);
		iVar0++;
	}
}

