/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeSchema.h>

@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
-(const SCD_Struct_CU28*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU31*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU31*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU31*)elementDefinitionWithName:(id)arg1 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU30*)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU30*)arg1 ;
-(const SCD_Struct_CU28*)categoryForElementDefinition:(const SCD_Struct_CU31*)arg1 ;
-(const SCD_Struct_CU31*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU31*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU31*)effectDefinitionWithName:(id)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU30*)arg1 ;
-(unsigned long long)materialDefinitionCount;
-(const SCD_Struct_CU31*)_sortedElementDefinitions;
-(const SCD_Struct_CU31*)_sortedEffectDefinitions;
-(long long)schemaVersion;
@end

