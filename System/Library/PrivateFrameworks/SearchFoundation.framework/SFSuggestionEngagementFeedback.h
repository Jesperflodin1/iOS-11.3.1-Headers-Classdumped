/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class SFSearchSuggestion;

@interface SFSuggestionEngagementFeedback : SFFeedback {

	SFSearchSuggestion* _suggestion;

}

@property (nonatomic,retain) SFSearchSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSuggestion:(id)arg1 ;
-(SFSearchSuggestion *)suggestion;
-(void)setSuggestion:(SFSearchSuggestion *)arg1 ;
@end
