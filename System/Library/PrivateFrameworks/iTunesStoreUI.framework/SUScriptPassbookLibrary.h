/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class PKPassLibrary, NSArray;

@interface SUScriptPassbookLibrary : SUScriptObject {

	PKPassLibrary* _passLibrary;

}

@property (readonly) NSArray * passes; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)attributeKeys;
-(void)dealloc;
-(id)initWithPassLibrary:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(NSArray *)passes;
@end

