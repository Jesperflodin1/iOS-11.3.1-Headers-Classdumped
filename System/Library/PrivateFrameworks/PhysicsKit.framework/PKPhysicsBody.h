/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSObject;
@class PKPhysicsWorld, NSMutableArray, NSArray;

@interface PKPhysicsBody : NSObject <NSCopying, NSCoding> {

	id<NSObject> _representedObject;
	unsigned* _bodyDef : 2BodyDef;
	unsigned* _body : 2Body;
	PKCFieldRef _field;
	int _dynamicType;
	vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> >* _shapes;
	PKPhysicsWorld* _world;
	NSMutableArray* _joints;
	BOOL _inUse;
	int _shapeType;
	shared_ptr<PKPath>* _pathPtr;
	shared_ptr<QuadTree>* _quadTree;
	CGPoint _p0;
	CGPoint _p1;
	CGSize _size;
	double _radius;
	double _edgeRadius;
	CGImageRef _mask;
	shared_ptr<PKPath>* _outline;
	BOOL _isPinned;
	BOOL _allowsRotation;
	/*^block*/id _postStepBlock;

}

@property (nonatomic,readonly) vector<PKPhysicsShape ** _shapes; 
@property (assign,nonatomic) unsigned* _bodyDef : 2BodyDef; 
@property (assign,nonatomic) unsigned* _body : 2Body; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) double rotation; 
@property (assign,getter=isDynamic,nonatomic) BOOL dynamic; 
@property (assign,nonatomic) BOOL usesPreciseCollisionDetection; 
@property (assign,nonatomic) BOOL allowsRotation; 
@property (assign,nonatomic) BOOL pinned; 
@property (assign,nonatomic) shared_ptr<PKPath>* outline; 
@property (nonatomic,readonly) PKPath* volume; 
@property (assign,getter=isResting,nonatomic) BOOL resting; 
@property (assign,nonatomic) double friction; 
@property (assign,nonatomic) double charge; 
@property (assign,nonatomic) double restitution; 
@property (assign,nonatomic) double linearDamping; 
@property (assign,nonatomic) double angularDamping; 
@property (assign,nonatomic) double density; 
@property (assign,nonatomic) double mass; 
@property (nonatomic,readonly) double area; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) BOOL affectedByGravity; 
@property (assign,nonatomic) unsigned fieldBitMask; 
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic) unsigned collisionBitMask; 
@property (assign,nonatomic) unsigned contactTestBitMask; 
@property (nonatomic,readonly) NSArray * joints; 
@property (assign,nonatomic,__weak) id<NSObject> representedObject; 
@property (nonatomic,copy) id postStepBlock;                                     //@synthesize postStepBlock=_postStepBlock - In the implementation block
@property (assign,nonatomic) CGVector velocity; 
@property (assign,nonatomic) double angularVelocity; 
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithCircleOfRadius:(double)arg1 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithBodies:(id)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
+(id)bodyWithOutline:(shared_ptr<PKPath>*)arg1 offset:(CGPoint)arg2 ;
+(id)initWithQuadTree:(id)arg1 ;
+(id)initWithMarchingCubes:(PKCGrid=iiiRange=ffffff}vector<unsigned char, std::__1::allocator<unsigned char> >=**compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >=*}}vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >}vector<int, std::__1::allocator<int> >=iicompressed_pair<int *, std::__1::allocator<int> >=i}}vector<signed char, std::__1::allocator<signed char> >=**compressed_pair<signed char *, std::__1::allocator<signed char> >=*}}}Ref)arg1 pixelFrame:(CGRect)arg2 ;
+(id)bodyWithCircleOfRadius:(double)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 edgeRadius:(double)arg2 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 edgeRadius:(double)arg3 ;
-(double)area;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setVelocity:(CGVector)arg1 ;
-(void)setMass:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(double)charge;
-(CGPoint)position;
-(void)setCharge:(double)arg1 ;
-(CGVector)velocity;
-(void)setFriction:(double)arg1 ;
-(void)setPinned:(BOOL)arg1 ;
-(shared_ptr<PKPath>*)outline;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(PKPath*)volume;
-(void)setResting:(BOOL)arg1 ;
-(id)_world;
-(void)setDynamic:(BOOL)arg1 ;
-(void)setRestitution:(double)arg1 ;
-(double)friction;
-(double)density;
-(void)setLinearDamping:(double)arg1 ;
-(void)setAngularDamping:(double)arg1 ;
-(BOOL)allowsRotation;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(double)angularVelocity;
-(void)setAngularVelocity:(double)arg1 ;
-(double)restitution;
-(double)linearDamping;
-(double)angularDamping;
-(double)mass;
-(void)applyImpulse:(CGVector)arg1 ;
-(void)setDensity:(double)arg1 ;
-(BOOL)pinned;
-(void)setUsesPreciseCollisionDetection:(BOOL)arg1 ;
-(unsigned)categoryBitMask;
-(unsigned)fieldBitMask;
-(void)setFieldBitMask:(unsigned)arg1 ;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(id<NSObject>)representedObject;
-(void)setRepresentedObject:(id<NSObject>)arg1 ;
-(void)setPostStepBlock:(id)arg1 ;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(unsigned)collisionBitMask;
-(void)setCollisionBitMask:(unsigned)arg1 ;
-(void)setContactTestBitMask:(unsigned)arg1 ;
-(void)applyUnscaledImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyUnscaledForce:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyUnscaledImpulse:(CGVector)arg1 ;
-(void)applyUnscaledForce:(CGVector)arg1 ;
-(id)initWithPolygonFromPath:(CGPathRef)arg1 ;
-(id)initWithCircleOfRadius:(double)arg1 ;
-(id)initWithRectangleOfSize:(CGSize)arg1 ;
-(id)initWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
-(id)initWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(id)initWithEdgeChainFromPath:(CGPathRef)arg1 ;
-(id)initWithEdgeLoopFromPath:(CGPathRef)arg1 ;
-(id)initWithBodies:(id)arg1 ;
-(void)set_allowSleep:(BOOL)arg1 ;
-(BOOL)isDynamic;
-(BOOL)usesPreciseCollisionDetection;
-(BOOL)isResting;
-(BOOL)affectedByGravity;
-(void)setOutline:(shared_ptr<PKPath>*)arg1 ;
-(id)initWithCircleOfRadius:(double)arg1 center:(CGPoint)arg2 ;
-(vector<PKPhysicsShape **)_shapes;
-(id)initWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 edgeRadius:(float)arg3 ;
-(id)_descriptionFormat;
-(void)clearBox2DData;
-(BOOL)_allowSleep;
-(id)postStepBlock;
-(unsigned*)_bodyDef;
-(BOOL)_inUse;
-(shared_ptr<QuadTree>*)_quadTree;
-(void)set_world:(id)arg1 ;
-(void)set_joints:(id)arg1 ;
-(void)set_inUse:(BOOL)arg1 ;
-(void)set_bodyDef:(unsigned*)arg1 ;
-(void)set_body:(unsigned*)arg1 ;
-(unsigned)contactTestBitMask;
-(unsigned*)_body;
-(void)applyForce:(CGPoint)arg1 ;
-(NSArray *)joints;
-(id)_descriptionClassName;
-(void)reapplyScale:(double)arg1 yScale:(double)arg2 ;
-(id)_joints;
-(void)applyForce:(CGPoint)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyTorque:(double)arg1 ;
-(void)applyImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyAngularImpulse:(double)arg1 ;
-(id)allContactedBodies;
@end

