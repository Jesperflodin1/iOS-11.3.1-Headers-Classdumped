/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface NTKFaceLayoutContentProvider : NSObject {

	UIColor* _foregroundColor;
	UIColor* _platterColor;

}

@property (nonatomic,retain) UIColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * platterColor;                 //@synthesize platterColor=_platterColor - In the implementation block
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)foregroundColor;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(void)setPlatterColor:(UIColor *)arg1 ;
-(UIColor *)platterColor;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3 ;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4 ;
-(long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 faceView:(id)arg3 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(void)setForegroundColor:(id)arg1 faceView:(id)arg2 ;
-(void)setPlatterColor:(id)arg1 faceView:(id)arg2 ;
@end
