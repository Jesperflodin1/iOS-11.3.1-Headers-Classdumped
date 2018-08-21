/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:07 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/AppStore.app/Frameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ASKBagSchema, SSBag, NSObject, NSDictionary;

@interface ASKBagSnapshot : NSObject {

	ASKBagSchema* _schema;
	SSBag* _bag;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSDictionary* _values;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (copy) NSDictionary * values;                                             //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) ASKBagSchema * schema;                               //@synthesize schema=_schema - In the implementation block
@property (nonatomic,readonly) SSBag * bag;                                         //@synthesize bag=_bag - In the implementation block
-(id)initWithBagSchema:(id)arg1 ;
-(void)updateWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSDictionary *)values;
-(void)setValues:(NSDictionary *)arg1 ;
-(SSBag *)bag;
-(ASKBagSchema *)schema;
@end

