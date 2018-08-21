/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>

@interface ISPerformanceDiagnosticsSettings : ISSettings {

	BOOL _shouldTracePerformance;

}

@property (assign,nonatomic) BOOL shouldTracePerformance;              //@synthesize shouldTracePerformance=_shouldTracePerformance - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setShouldTracePerformance:(BOOL)arg1 ;
-(BOOL)shouldTracePerformance;
@end

