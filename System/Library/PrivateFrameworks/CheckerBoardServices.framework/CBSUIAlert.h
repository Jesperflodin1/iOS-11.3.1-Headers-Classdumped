/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface CBSUIAlert : NSObject <NSSecureCoding> {

	BOOL _isActive;
	NSString* _title;
	NSString* _message;
	long long _preferredStyle;
	NSMutableArray* _actions;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long preferredStyle;              //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;              //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL isActive;                         //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)alertWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActions:(NSMutableArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isActive;
-(NSString *)identifier;
-(NSMutableArray *)actions;
-(NSString *)title;
-(void)addAction:(id)arg1 ;
-(void)deactivate;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)activate;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(long long)preferredStyle;
-(NSString *)message;
-(id)alertController;
-(id)initWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
-(void)_sendCreate;
-(void)_sendDismiss;
-(void)_receiveResponse;
@end
