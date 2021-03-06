/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SXInsertableComponent <NSObject>
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * layout; 
@property (nonatomic,retain) id<SXComponentAnchor> anchor; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)layout;
-(void)setLayout:(id)arg1;
-(id<SXComponentAnchor>)anchor;
-(void)setAnchor:(id)arg1;

@end

