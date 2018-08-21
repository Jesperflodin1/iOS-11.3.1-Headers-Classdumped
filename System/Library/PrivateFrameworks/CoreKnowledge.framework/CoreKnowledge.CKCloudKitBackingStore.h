/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreKnowledge/CoreKnowledge.CKSQLBackingStore.h>

@class NSString;

@interface CoreKnowledge.CKCloudKitBackingStore : CoreKnowledge.CKSQLBackingStore

@property (copy,nonatomic) NSString * name; 
+(id)mainInstance;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)triplesComponentsMatching:(id)arg1 error:(id*)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)writeBatch;
-(void)increaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)decreaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 toValue:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dropLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dropLinksWithLabel:(id)arg1 from:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dropLinksWithBetween:(id)arg1 and:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)disableSyncAndDeleteCloudDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeValueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeValuesForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeValuesMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllValuesWithCompletionHandler:(/*^block*/id)arg1 ;
@end
