/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>

@protocol SXEmbedService;
@interface SXEmbedComponentSizer : SXComponentSizer {

	id<SXEmbedService> _embedService;

}

@property (nonatomic,readonly) id<SXEmbedService> embedService;              //@synthesize embedService=_embedService - In the implementation block
-(double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2 ;
-(NSRange)overrideColumnLayoutForColumnRange:(NSRange)arg1 inColumnLayout:(id)arg2 ;
-(id<SXEmbedService>)embedService;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 documentController:(id)arg4 layoutAttributes:(id)arg5 embedService:(id)arg6 ;
@end

