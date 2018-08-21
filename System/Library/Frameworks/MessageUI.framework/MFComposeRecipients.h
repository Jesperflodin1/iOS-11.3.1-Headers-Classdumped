/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIItemProviderReading.h>

@class NSArray, NSString;

@interface MFComposeRecipients : NSObject <UIItemProviderReading> {

	NSArray* _recipients;

}

@property (nonatomic,copy,readonly) NSArray * recipients;              //@synthesize recipients=_recipients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readableTypeIdentifiersForItemProvider;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
-(NSArray *)recipients;
-(id)initWithRecipients:(id)arg1 ;
@end

