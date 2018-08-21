/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface PPSource : NSObject <NSCopying> {

	NSString* _bundleId;
	NSString* _groupId;
	NSString* _documentId;
	NSDate* _date;

}

@property (nonatomic,readonly) NSString * bundleId;                //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * groupId;                 //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,readonly) NSString * documentId;              //@synthesize documentId=_documentId - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleId;
-(BOOL)isEqualToSource:(id)arg1 ;
-(NSString *)documentId;
-(id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4 ;
-(NSString *)groupId;
@end

