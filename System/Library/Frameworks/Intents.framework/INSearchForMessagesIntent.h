/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForMessagesIntentExport.h>

@class NSArray, INDateComponentsRange, NSString;

@interface INSearchForMessagesIntent : INIntent <INSearchForMessagesIntentExport>

@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,readonly) long long recipientsOperator; 
@property (nonatomic,copy,readonly) NSArray * senders; 
@property (nonatomic,readonly) long long sendersOperator; 
@property (nonatomic,copy,readonly) NSArray * searchTerms; 
@property (nonatomic,readonly) long long searchTermsOperator; 
@property (nonatomic,readonly) unsigned long long attributes; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dateTimeRange; 
@property (nonatomic,copy,readonly) NSArray * identifiers; 
@property (nonatomic,readonly) long long identifiersOperator; 
@property (nonatomic,copy,readonly) NSArray * notificationIdentifiers; 
@property (nonatomic,readonly) long long notificationIdentifiersOperator; 
@property (nonatomic,copy,readonly) NSArray * speakableGroupNames; 
@property (nonatomic,readonly) long long speakableGroupNamesOperator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(NSArray *)identifiers;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(id)domain;
-(id)contents;
-(void)setContents:(id)arg1 ;
-(unsigned long long)attributes;
-(void)setAttributes:(unsigned long long)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8 ;
-(NSArray *)searchTerms;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 ;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 ;
-(long long)contentsOperator;
-(id)contentPredicate;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(long long)searchTermsOperator;
-(void)setDateTimeRange:(INDateComponentsRange *)arg1 ;
-(INDateComponentsRange *)dateTimeRange;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 groupNames:(id)arg8 ;
-(id)groupNames;
-(void)setGroupNames:(id)arg1 ;
-(long long)groupNamesOperator;
-(void)setNotificationIdentifiers:(NSArray *)arg1 ;
-(void)setSpeakableGroupNames:(NSArray *)arg1 ;
-(NSArray *)notificationIdentifiers;
-(NSArray *)speakableGroupNames;
-(long long)recipientsOperator;
-(long long)sendersOperator;
-(long long)identifiersOperator;
-(long long)notificationIdentifiersOperator;
-(long long)speakableGroupNamesOperator;
-(void)setVerb:(id)arg1 ;
-(id)verb;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setSenders:(NSArray *)arg1 ;
-(NSArray *)senders;
-(id)attributeSet;
-(id)_metadata;
-(void)setDomain:(id)arg1 ;
@end
