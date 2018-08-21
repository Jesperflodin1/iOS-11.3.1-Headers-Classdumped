/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCBackgroundTaskable;
@class FCThreadSafeMutableDictionary;

@interface FCRemoteDefaults : NSObject {

	id<FCBackgroundTaskable> _backgroundTaskable;
	FCThreadSafeMutableDictionary* _remoteDefaults;

}

@property (nonatomic,__weak,readonly) id<FCBackgroundTaskable> backgroundTaskable;              //@synthesize backgroundTaskable=_backgroundTaskable - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableDictionary * remoteDefaults;                  //@synthesize remoteDefaults=_remoteDefaults - In the implementation block
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(void)checkForUpdate;
-(id)initWithBackgroundTaskable:(id)arg1 ;
-(void)updateRemoteDefaults;
-(FCThreadSafeMutableDictionary *)remoteDefaults;
-(BOOL)isAvailable;
-(id)URLForKey:(id)arg1 ;
-(id)URLRequest;
-(void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
@end

