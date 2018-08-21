/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDOwningAttachment <NSObject>
@property (nonatomic,readonly) BOOL isDrawable; 
@property (nonatomic,readonly) BOOL isAnchored; 
@property (nonatomic,readonly) BOOL isPartitioned; 
@property (nonatomic,readonly) BOOL isAttachedToBodyText; 
@property (nonatomic,readonly) Class positionerClass; 
@property (nonatomic,readonly) BOOL isSearchable; 
@property (nonatomic,readonly) BOOL specifiesEnabledKnobMask; 
@required
-(BOOL)isAnchored;
-(BOOL)isAttachedToBodyText;
-(BOOL)specifiesEnabledKnobMask;
-(BOOL)isSearchable;
-(BOOL)isDrawable;
-(BOOL)isPartitioned;
-(Class)positionerClass;
-(void)infoChanged;

@end
