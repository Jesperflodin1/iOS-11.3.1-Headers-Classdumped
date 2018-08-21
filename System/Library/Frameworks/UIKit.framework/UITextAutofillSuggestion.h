/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextSuggestion.h>

@class NSString;

@interface UITextAutofillSuggestion : UITextSuggestion {

	NSString* _username;
	NSString* _password;

}

@property (nonatomic,copy,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
+(id)autofillSuggestionWithUsername:(id)arg1 password:(id)arg2 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(NSString *)username;
-(NSString *)password;
@end
