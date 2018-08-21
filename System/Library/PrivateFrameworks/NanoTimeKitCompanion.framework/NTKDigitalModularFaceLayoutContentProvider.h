/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKFaceLayoutContentProvider.h>

@class NTKLayoutRule;

@interface NTKDigitalModularFaceLayoutContentProvider : NTKFaceLayoutContentProvider {

	NTKLayoutRule* _timeLayoutRuleNormal;
	NTKLayoutRule* _timeLayoutRuleEditing;

}
-(id)init;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3 ;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3 faceView:(id)arg4 ;
-(id)digitalTimeLayoutRuleForEditMode:(long long)arg1 ;
@end

