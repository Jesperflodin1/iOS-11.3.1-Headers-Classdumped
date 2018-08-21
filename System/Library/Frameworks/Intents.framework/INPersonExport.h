/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INPersonHandle, NSPersonNameComponents, INImage, NSArray;


@protocol INPersonExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,copy) INPersonHandle * personHandle; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) INImage * image; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * customIdentifier; 
@property (nonatomic,copy) NSArray * aliases; 
@property (assign,nonatomic) long long suggestionType; 
@property (assign,nonatomic) BOOL isMe; 
@property (nonatomic,copy) NSArray * alternatives; 
@required
-(NSString *)relationship;
-(void)setDisplayName:(id)arg1;
-(void)setIsMe:(BOOL)arg1;
-(BOOL)isMe;
-(long long)suggestionType;
-(void)setSuggestionType:(long long)arg1;
-(NSString *)handle;
-(id)init;
-(void)setImage:(id)arg1;
-(INImage *)image;
-(NSString *)displayName;
-(NSArray *)alternatives;
-(INPersonHandle *)personHandle;
-(void)setAlternatives:(id)arg1;
-(void)setCustomIdentifier:(id)arg1;
-(NSString *)customIdentifier;
-(void)setAliases:(id)arg1;
-(void)setPersonHandle:(id)arg1;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(id)arg1;
-(void)setHandle:(id)arg1;
-(NSArray *)aliases;
-(NSPersonNameComponents *)nameComponents;
-(void)setRelationship:(id)arg1;
-(void)setNameComponents:(id)arg1;

@end
