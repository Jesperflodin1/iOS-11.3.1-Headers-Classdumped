/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSString, NSArray;

@interface BatteryUsageQueryModule : NSObject {

	NSOperationQueue* _queryUsageQueue;
	NSOperationQueue* _queryModelQueue;
	int _type;
	NSString* _manualFileName;
	NSArray* _graphNames;

}

@property (nonatomic,retain) NSString * manualFileName;              //@synthesize manualFileName=_manualFileName - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * graphNames;                   //@synthesize graphNames=_graphNames - In the implementation block
+(id)sharedModule;
-(void)populateBatteryModelsWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)manualFileName;
-(void)setManualFileName:(NSString *)arg1 ;
-(NSArray *)graphNames;
-(void)setGraphNames:(NSArray *)arg1 ;
-(void)populateBatteryUsageWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
@end
