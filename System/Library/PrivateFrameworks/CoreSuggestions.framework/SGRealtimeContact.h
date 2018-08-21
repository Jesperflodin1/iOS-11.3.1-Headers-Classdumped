/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SGRealtimeSuggestion.h>

@class SGContact, NSString;

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion> {

	BOOL _isHarvested;
	int _state;
	SGContact* _contact;
	NSString* _cnContactIdentifier;
	unsigned long long _extractionType;

}

@property (nonatomic,readonly) int state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SGContact * contact;                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * cnContactIdentifier;                 //@synthesize cnContactIdentifier=_cnContactIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long extractionType;              //@synthesize extractionType=_extractionType - In the implementation block
@property (nonatomic,readonly) BOOL isHarvested;                               //@synthesize isHarvested=_isHarvested - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)realtimeContactForNewContact:(id)arg1 ;
+(id)realtimeContactForFields:(id)arg1 addedToCuratedContact:(id)arg2 ;
-(NSString *)cnContactIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithState:(int)arg1 contact:(id)arg2 identifier:(id)arg3 ;
-(BOOL)isEqualToRealtimeContact:(id)arg1 ;
-(void)setExtractionType;
-(void)setCnContactIdentifier:(NSString *)arg1 ;
-(SGContact *)contact;
-(id)markedAsHarvested;
-(unsigned long long)extractionType;
-(BOOL)isHarvested;
@end

