/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/_UISettings.h>

@class NSArray, NSString, UIColor;

@interface PTLegibleTextAssistantSettings : _UISettings {

	BOOL _drawingShadowDrawsText;
	NSArray* _shadowRadii;
	NSArray* _shadowAlphas;
	NSString* _shadowCompositingFilterName;
	UIColor* _foregroundColor;
	SCD_Struct_PT1 _imageStatistics;

}

@property (nonatomic,copy) NSArray * shadowRadii;                               //@synthesize shadowRadii=_shadowRadii - In the implementation block
@property (nonatomic,copy) NSArray * shadowAlphas;                              //@synthesize shadowAlphas=_shadowAlphas - In the implementation block
@property (nonatomic,copy) NSString * shadowCompositingFilterName;              //@synthesize shadowCompositingFilterName=_shadowCompositingFilterName - In the implementation block
@property (assign,nonatomic) BOOL drawingShadowDrawsText;                       //@synthesize drawingShadowDrawsText=_drawingShadowDrawsText - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                         //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) SCD_Struct_PT1 imageStatistics;                    //@synthesize imageStatistics=_imageStatistics - In the implementation block
+(id)settingsWithImageStatistics:(SCD_Struct_PT1)arg1 ;
-(void)setDefaultValues;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)foregroundColor;
-(void)setShadowCompositingFilterName:(NSString *)arg1 ;
-(NSString *)shadowCompositingFilterName;
-(void)setImageStatistics:(SCD_Struct_PT1)arg1 ;
-(NSArray *)shadowRadii;
-(BOOL)drawingShadowDrawsText;
-(NSArray *)shadowAlphas;
-(SCD_Struct_PT1)imageStatistics;
-(void)setShadowRadii:(NSArray *)arg1 ;
-(void)setShadowAlphas:(NSArray *)arg1 ;
-(void)setDrawingShadowDrawsText:(BOOL)arg1 ;
-(id)calculateForegroundColorWithImageStatistics:(SCD_Struct_PT1)arg1 ;
@end
