/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKWritableDeviceActivityStore.h>

@class CKKnowledgeStore;

@interface CKDeviceActivityStore : NSObject <CKWritableDeviceActivityStore> {

	 store;

}

@property (readonly,nonatomic) CKKnowledgeStore * store; 
+(id)defaultStore;
-(BOOL)recordActivityWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4 ;
-(void)recordActivityWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithStore:(id)arg1 ;
-(id)init;
-(CKKnowledgeStore *)store;
@end

