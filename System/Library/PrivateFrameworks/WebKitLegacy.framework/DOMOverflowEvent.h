/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent

@property (readonly) unsigned short orient; 
@property (readonly) BOOL horizontalOverflow; 
@property (readonly) BOOL verticalOverflow; 
-(unsigned short)orient;
-(BOOL)horizontalOverflow;
-(BOOL)verticalOverflow;
-(void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(BOOL)arg2 verticalOverflow:(BOOL)arg3 ;
@end

