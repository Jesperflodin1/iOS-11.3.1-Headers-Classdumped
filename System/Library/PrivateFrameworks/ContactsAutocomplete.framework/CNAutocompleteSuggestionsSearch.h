/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CNContactStore, NSString;

@interface CNAutocompleteSuggestionsSearch : NSObject <CNAutocompleteSearch> {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)charactersThreshold;
-(id)init;
-(id)initWithContactStore:(id)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)suggestedContactsForRequest:(id)arg1 error:(id*)arg2 ;
-(id)convertContacts:(id)arg1 request:(id)arg2 ;
-(/*^block*/id)resultTransformWithRequest:(id)arg1 ;
-(/*^block*/id)resultTransformWithFactory:(id)arg1 properties:(id)arg2 ;
-(CNContactStore *)contactStore;
@end

