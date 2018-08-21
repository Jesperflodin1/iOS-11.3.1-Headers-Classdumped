/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSString;


@protocol FCFeedGroupEmitting <FCFeedGroupInsertionDescriptor,NSObject>
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,copy,readonly) NSString * groupEmitterIdentifier; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
@optional
-(BOOL)supportsPagination;
-(BOOL)canMergeGroupsUnconditionally;
-(BOOL)canMergeHeadlinesFromGroup:(id)arg1 intoGroup:(id)arg2;
-(id)backingChannelTagIDWithCoreConfiguration:(id)arg1;
-(BOOL)emitsSingletonGroups;
-(BOOL)emitsSingleRefreshSessionGroups;
-(long long)requiredForYouContentTypes;
-(BOOL)isRequiredByFollowingEmitters;

@required
-(NSString *)groupEmitterIdentifier;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
-(NSSet *)emittableGroupTypes;

@end

