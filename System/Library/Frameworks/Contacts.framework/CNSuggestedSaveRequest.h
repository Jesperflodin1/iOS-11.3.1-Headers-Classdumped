/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNSaveRequest.h>

@class NSMutableSet, NSSet;

@interface CNSuggestedSaveRequest : CNSaveRequest {

	NSMutableSet* _mutableConfirmedSuggestions;
	NSMutableSet* _mutableRejectedSuggestions;

}

@property (nonatomic,retain) NSMutableSet * mutableConfirmedSuggestions;              //@synthesize mutableConfirmedSuggestions=_mutableConfirmedSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableRejectedSuggestions;               //@synthesize mutableRejectedSuggestions=_mutableRejectedSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * confirmedSuggestions; 
@property (nonatomic,copy,readonly) NSSet * rejectedSuggestions; 
-(NSMutableSet *)mutableConfirmedSuggestions;
-(void)setMutableConfirmedSuggestions:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableRejectedSuggestions;
-(void)setMutableRejectedSuggestions:(NSMutableSet *)arg1 ;
-(void)confirmSuggestion:(id)arg1 ;
-(void)rejectSuggestion:(id)arg1 ;
-(NSSet *)confirmedSuggestions;
-(NSSet *)rejectedSuggestions;
-(id)storeIdentifier;
@end

