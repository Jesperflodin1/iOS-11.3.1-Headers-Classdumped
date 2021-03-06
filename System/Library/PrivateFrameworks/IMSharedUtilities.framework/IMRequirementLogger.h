/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class IMLoggerOutput, NSString;

@interface IMRequirementLogger : NSObject {

	BOOL _throwFailures;
	IMLoggerOutput* _logger;
	NSString* _categoryOverride;

}

@property (retain) IMLoggerOutput * logger;                  //@synthesize logger=_logger - In the implementation block
@property (assign) long long loggingLevel; 
@property (retain) NSString * categoryOverride;              //@synthesize categoryOverride=_categoryOverride - In the implementation block
@property (assign) BOOL throwFailures;                       //@synthesize throwFailures=_throwFailures - In the implementation block
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
-(id)init;
-(id)description;
-(void)updateSettingsFromUserDefaults;
-(void)setThrowFailures:(BOOL)arg1 ;
-(NSString *)categoryOverride;
-(BOOL)throwFailures;
-(void)requirementFailedForCategory:(const char*)arg1 description:(id)arg2 location:(IMFileLocation_t*)arg3 ;
-(void)setCategoryOverride:(NSString *)arg1 ;
-(IMLoggerOutput *)logger;
-(void)setLogger:(IMLoggerOutput *)arg1 ;
-(void)setLoggingLevel:(long long)arg1 ;
-(long long)loggingLevel;
@end

