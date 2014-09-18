/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject <NSCopying, NSCoding> {
    struct CGVector { 
        double dx; 
        double dy; 
    double _angularDamping;
    double _angularVelocity;
    double _area;
    unsigned int _categoryBitMask;
    double _charge;
    unsigned int _collisionBitMask;
    unsigned int _contactTestBitMask;
    double _density;
    unsigned int _fieldBitMask;
    double _friction;
    NSArray *_joints;
    double _linearDamping;
    double _mass;
    SKNode *_node;
    double _restitution;
    } _velocity;
    bool_affectedByGravity;
    bool_allowsRotation;
    bool_dynamic;
    bool_pinned;
    bool_resting;
    bool_usesPreciseCollisionDetection;
}

@property bool affectedByGravity;
@property bool allowsRotation;
@property double angularDamping;
@property double angularVelocity;
@property(readonly) double area;
@property unsigned int categoryBitMask;
@property double charge;
@property unsigned int collisionBitMask;
@property unsigned int contactTestBitMask;
@property double density;
@property(getter=isDynamic) bool dynamic;
@property unsigned int fieldBitMask;
@property double friction;
@property(readonly) NSArray * joints;
@property double linearDamping;
@property double mass;
@property(readonly) SKNode * node;
@property bool pinned;
@property(getter=isResting) bool resting;
@property double restitution;
@property bool usesPreciseCollisionDetection;
@property struct CGVector { double x1; double x2; } velocity;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeLoopFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1 center:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)bodyWithTexture:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)affectedByGravity;
- (id)allContactedBodies;
- (bool)allowsRotation;
- (double)angularDamping;
- (double)angularVelocity;
- (void)applyAngularImpulse:(double)arg1;
- (void)applyForce:(struct CGVector { double x1; double x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)applyForce:(struct CGVector { double x1; double x2; })arg1;
- (void)applyImpulse:(struct CGVector { double x1; double x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)applyImpulse:(struct CGVector { double x1; double x2; })arg1;
- (void)applyTorque:(double)arg1;
- (double)area;
- (unsigned int)categoryBitMask;
- (double)charge;
- (unsigned int)collisionBitMask;
- (unsigned int)contactTestBitMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)density;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fieldBitMask;
- (double)friction;
- (id)initWithCoder:(id)arg1;
- (bool)isDynamic;
- (bool)isResting;
- (id)joints;
- (double)linearDamping;
- (double)mass;
- (id)node;
- (bool)pinned;
- (double)restitution;
- (void)setAffectedByGravity:(bool)arg1;
- (void)setAllowsRotation:(bool)arg1;
- (void)setAngularDamping:(double)arg1;
- (void)setAngularVelocity:(double)arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setCharge:(double)arg1;
- (void)setCollisionBitMask:(unsigned int)arg1;
- (void)setContactTestBitMask:(unsigned int)arg1;
- (void)setDensity:(double)arg1;
- (void)setDynamic:(bool)arg1;
- (void)setFieldBitMask:(unsigned int)arg1;
- (void)setFriction:(double)arg1;
- (void)setLinearDamping:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setPinned:(bool)arg1;
- (void)setResting:(bool)arg1;
- (void)setRestitution:(double)arg1;
- (void)setUsesPreciseCollisionDetection:(bool)arg1;
- (void)setVelocity:(struct CGVector { double x1; double x2; })arg1;
- (bool)usesPreciseCollisionDetection;
- (struct CGVector { double x1; double x2; })velocity;

@end