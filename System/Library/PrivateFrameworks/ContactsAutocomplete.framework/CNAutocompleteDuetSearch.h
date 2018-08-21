/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CNContactStore, NSString;

@interface CNAutocompleteDuetSearch : NSObject <CNAutocompleteSearch> {

	/*^block*/id _peopleSuggesterFactory;
	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) id peopleSuggesterFactory;                  //@synthesize peopleSuggesterFactory=_peopleSuggesterFactory - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureContext:(id)arg1 withFetchRequest:(id)arg2 ;
+(void)configureSettings:(id)arg1 withFetchRequest:(id)arg2 ;
+(id)constrainMechanismsForSearchType:(unsigned long long)arg1 ;
+(unsigned long long)predictedResultLimit;
-(id)init;
-(id)peopleSuggester;
-(id)initWithPeopleSuggesterFactory:(/*^block*/id)arg1 ;
-(id)initWithPeopleSuggesterFactory:(/*^block*/id)arg1 contactStore:(id)arg2 ;
-(id)peopleSuggesterFactory;
-(id)suggesterContextForFetchRequest:(id)arg1 ;
-(id)suggesterSettingsForFetchRequest:(id)arg1 ;
-(id)querySuggester:(id)arg1 withContext:(id)arg2 settings:(id)arg3 ;
-(id)autocompleteResultsFromSuggesterResults:(id)arg1 factory:(id)arg2 ;
-(id)resultValueForCDContact:(id)arg1 ;
-(long long)addressTypeForCDContact:(id)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CNContactStore *)contactStore;
@end

