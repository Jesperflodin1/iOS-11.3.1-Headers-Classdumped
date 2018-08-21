/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HelpKit/HelpKit-Structs.h>
@class NSString;

@interface HLPHelpSearchResult : NSObject {

	long long _weight;
	long long _matchCount;
	NSString* _identifier;

}

@property (assign,nonatomic) long long weight;                   //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) long long matchCount;               //@synthesize matchCount=_matchCount - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)debugDescription;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)weight;
-(void)setWeight:(long long)arg1 ;
-(long long)matchCount;
-(void)setMatchCount:(long long)arg1 ;
@end

