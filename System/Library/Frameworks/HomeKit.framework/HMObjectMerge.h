/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol HMObjectMerge <NSObject>
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@optional
-(void)mergeWithNewObjectNoMergeCount:(id)arg1;

@required
-(NSUUID *)uniqueIdentifier;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;

@end
