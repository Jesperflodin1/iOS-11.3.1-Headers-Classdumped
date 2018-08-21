/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSAttributedString, NSURL;


@protocol CNContactSuggestionViewControllerDataSource <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * appName; 
@property (nonatomic,readonly) NSAttributedString * formattedSnippet; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * date; 
@property (nonatomic,readonly) NSString * from; 
@property (nonatomic,readonly) NSURL * url; 
@required
-(NSString *)from;
-(NSURL *)url;
-(NSString *)title;
-(unsigned long long)type;
-(NSString *)date;
-(NSAttributedString *)formattedSnippet;
-(NSString *)appName;

@end

