/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKDigitalModularFace : NTKFace
+(id)_defaultSelectedComplicationSlot;
-(Class)_optionClassForCustomEditMode:(long long)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_complicationSlotDescriptors;
-(id)_orderedComplicationSlots;
-(id)_localizedNameForComplicationSlot:(id)arg1 ;
-(BOOL)_option:(id)arg1 migratesToValidOption:(id*)arg2 forCustomEditMode:(long long)arg3 ;
-(long long)_editModeForOldEncodingIndex:(long long)arg1 ;
@end

