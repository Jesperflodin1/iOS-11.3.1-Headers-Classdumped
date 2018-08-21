/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/_DECItemEquivalency.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSMutableDictionary, NSString;

@interface _DECItem : NSObject <_DECItemEquivalency, NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	NSMutableDictionary* _metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(unsigned long long)category;
+(BOOL)supportsSecureCoding;
+(BOOL)isSearchFoundationCompliant;
+(id)fromSearchResult:(id)arg1 ;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)metadata;
-(id)toSearchResult;
-(BOOL)isEqualToItem:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
@end
