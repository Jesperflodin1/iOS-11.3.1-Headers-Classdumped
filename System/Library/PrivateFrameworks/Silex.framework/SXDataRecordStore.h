/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SXDataRecordStore : NSObject {

	NSArray* _descriptors;
	NSArray* _records;

}

@property (nonatomic,readonly) NSArray * records;                  //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSArray * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
-(NSArray *)records;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
-(NSArray *)descriptors;
-(id)initWithRecords:(id)arg1 andDescriptors:(id)arg2 ;
-(id)recordsUsingSortDescriptors:(id)arg1 ;
-(unsigned long long)numberOfRecords;
@end

