/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, CADisplay, BKSDisplayProgressIndicatorProperties;


@protocol BKSDisplayRenderOverlayDescribing <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) CADisplay * display; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) BOOL lockBacklight; 
@property (nonatomic,readonly) BKSDisplayProgressIndicatorProperties * progressIndicatorProperties; 
@property (getter=isInterstitial,nonatomic,readonly) BOOL interstitial; 
@required
-(BOOL)isInterstitial;
-(BOOL)lockBacklight;
-(BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;
-(long long)interfaceOrientation;
-(NSString *)name;
-(CADisplay *)display;

@end

