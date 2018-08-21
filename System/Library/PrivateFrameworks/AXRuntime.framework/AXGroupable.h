/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AXElementGroup;


@protocol AXGroupable <NSObject>
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup; 
@required
-(CGRect)frame;
-(BOOL)isGroup;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(AXElementGroup *)parentGroup;
-(void)setParentGroup:(id)arg1;

@end

