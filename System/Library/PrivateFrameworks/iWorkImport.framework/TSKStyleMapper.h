/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKStyleMapper <NSObject>
@property (nonatomic,readonly) BOOL clientsMustRemap; 
@property (assign,nonatomic) BOOL forceMatchStyle; 
@required
-(BOOL)clientsMustRemap;
-(id)mappedStyleForStyle:(id)arg1;
-(id)targetStylesheet;
-(void)pushMappingContext:(id)arg1;
-(void)popMappingContext:(id)arg1;
-(BOOL)forceMatchStyle;
-(void)setForceMatchStyle:(BOOL)arg1;

@end

