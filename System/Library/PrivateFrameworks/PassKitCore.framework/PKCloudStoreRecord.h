/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSArray;

@interface PKCloudStoreRecord : NSObject {

	NSMutableDictionary* _records;
	NSDictionary* _cloudStoreSpecificKeys;

}

@property (nonatomic,copy) NSDictionary * cloudStoreSpecificKeys;              //@synthesize cloudStoreSpecificKeys=_cloudStoreSpecificKeys - In the implementation block
@property (nonatomic,readonly) NSArray * records; 
-(id)description;
-(NSArray *)records;
-(void)addRecord:(id)arg1 ;
-(id)recordWithRecordType:(id)arg1 ;
-(id)initWithRecords:(id)arg1 ;
-(NSDictionary *)cloudStoreSpecificKeys;
-(void)setCloudStoreSpecificKeys:(NSDictionary *)arg1 ;
@end

