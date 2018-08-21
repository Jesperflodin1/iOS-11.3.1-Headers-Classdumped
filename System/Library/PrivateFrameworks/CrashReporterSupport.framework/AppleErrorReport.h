/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary, NSArray;

@interface AppleErrorReport : NSObject {

	NSString* _incidentID;
	NSString* _logType;
	double _capture_time;
	NSMutableArray* _notes;
	NSMutableDictionary* _logWritingOptions;
	NSString* _logfile;

}

@property (nonatomic,readonly) NSArray * notes;                 //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSString * logfile;              //@synthesize logfile=_logfile - In the implementation block
+(void)logSafely:(/*^block*/id)arg1 ;
+(id)bootArgs;
+(unsigned char)executeWithTimeout:(unsigned)arg1 Code:(/*^block*/id)arg2 ;
+(id)systemIDWithDescription:(BOOL)arg1 ;
+(id)kernelVersionDescription;
-(BOOL)isInternalInstall;
-(id)problemType;
-(id)hardwareModel;
-(id)init;
-(void)dealloc;
-(NSArray *)notes;
-(BOOL)isActionable;
-(BOOL)isAppleTV;
-(BOOL)saveToDir:(id)arg1 ;
-(NSString *)logfile;
-(id)incidentID;
-(id)overrideFileExtension;
-(id)reportNamePrefix;
-(id)additionalIPSMetadata;
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)appleCareDetails;
-(BOOL)secondChanceToSylog;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2 ;
-(void)symlink:(id)arg1 ;
@end

