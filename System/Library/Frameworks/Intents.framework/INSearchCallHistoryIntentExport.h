/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INDateComponentsRange, INPerson, NSNumber;


@protocol INSearchCallHistoryIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy) INPerson * recipient; 
@property (assign,nonatomic) unsigned long long callCapabilities; 
@property (assign,nonatomic) unsigned long long callTypes; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (nonatomic,copy) NSNumber * unseen; 
@required
-(id)init;
-(NSNumber *)unseen;
-(void)setUnseen:(id)arg1;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1;
-(unsigned long long)callCapabilities;
-(unsigned long long)callTypes;
-(void)setCallCapabilities:(unsigned long long)arg1;
-(void)setCallTypes:(unsigned long long)arg1;
-(INDateComponentsRange *)dateCreated;
-(void)setDateCreated:(id)arg1;
-(INPerson *)recipient;
-(void)setRecipient:(id)arg1;

@end

