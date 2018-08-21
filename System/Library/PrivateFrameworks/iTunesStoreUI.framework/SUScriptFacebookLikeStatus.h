/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSArray;

@interface SUScriptFacebookLikeStatus : SUScriptObject {

	NSDictionary* _dictionary;

}

@property (readonly) unsigned long long friendLikeCount; 
@property (readonly) NSArray * friends; 
@property (readonly) unsigned long long globalLikeCount; 
@property (getter=isLikedByMe,readonly) id likedByMe; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(void)dealloc;
-(id)initWithLikeStatusDictionary:(id)arg1 ;
-(unsigned long long)friendLikeCount;
-(unsigned long long)globalLikeCount;
-(id)isLikedByMe;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSArray *)friends;
@end
