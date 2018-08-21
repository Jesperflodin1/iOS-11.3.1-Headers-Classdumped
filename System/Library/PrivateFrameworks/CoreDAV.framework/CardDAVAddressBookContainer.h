/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainer.h>

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer {

	NSString* _maxResourceSize;
	NSString* _maxImageSize;
	NSURL* _meCardURL;

}

@property (nonatomic,retain) NSString * maxResourceSize;              //@synthesize maxResourceSize=_maxResourceSize - In the implementation block
@property (nonatomic,retain) NSString * maxImageSize;                 //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (nonatomic,retain) NSURL * meCardURL;                       //@synthesize meCardURL=_meCardURL - In the implementation block
@property (nonatomic,readonly) BOOL isAddressBook; 
@property (nonatomic,readonly) BOOL isSharedAddressBook; 
@property (nonatomic,readonly) BOOL isSearchAddressBook; 
+(id)copyPropertyMappingsForParser;
-(id)description;
-(NSString *)maxResourceSize;
-(void)setMaxResourceSize:(NSString *)arg1 ;
-(void)setMeCardURL:(NSURL *)arg1 ;
-(BOOL)isAddressBook;
-(BOOL)isSearchAddressBook;
-(BOOL)isSharedAddressBook;
-(NSURL *)meCardURL;
-(void)setMaxImageSize:(NSString *)arg1 ;
-(NSString *)maxImageSize;
-(void)applyParsedProperties:(id)arg1 ;
@end

