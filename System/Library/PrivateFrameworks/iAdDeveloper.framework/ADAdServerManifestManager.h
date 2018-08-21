/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface ADAdServerManifestManager : NSObject {

	NSMutableDictionary* _recordsByServerName;
	NSString* _deviceDescription;

}

@property (nonatomic,retain) NSMutableDictionary * recordsByServerName;              //@synthesize recordsByServerName=_recordsByServerName - In the implementation block
@property (nonatomic,copy) NSString * deviceDescription;                             //@synthesize deviceDescription=_deviceDescription - In the implementation block
@property (nonatomic,readonly) BOOL updateInProgress; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(NSString *)deviceDescription;
-(BOOL)updateInProgress;
-(void)setURL:(id)arg1 forTemporaryServerWithName:(id)arg2 ;
-(void)_setURL:(id)arg1 forServerWithName:(id)arg2 temporary:(BOOL)arg3 ;
-(NSMutableDictionary *)recordsByServerName;
-(void)_considerRefreshingServerRecord:(id)arg1 ;
-(void)_persistRecords;
-(id)_persistedManifestsURL;
-(void)_storeLoadedRecords:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)URLForServerWithName:(id)arg1 ;
-(void)setManifest:(id)arg1 forRecord:(id)arg2 URL:(id)arg3 ;
-(id)serverRecords;
-(void)refreshAllRecords;
-(void)refreshRecord:(id)arg1 ;
-(void)_loadRecords:(/*^block*/id)arg1 ;
-(void)setRecordsByServerName:(NSMutableDictionary *)arg1 ;
-(void)setDeviceDescription:(NSString *)arg1 ;
@end

