#ifdef _UNI_OBJ
    #define _UNI_OBJ

typedef struct Star {
    int Mass;
    int Radius;
    int level;
}Star;

typedef struct SNode {
    Star star;
    struct SNode *next;
}SNode, *StarList

struct Planet {
    int Mass;
    int Radius;
    int level;
};

typedef struct PNode {
    Planet planet;
    struct PNode *next;
}PNode, *PlanetList

struct AstroidBelt {

};

struct Comet {

};

struct SolarSystem {
    StarList stars;
    PlanetList planets;
};

struct StarCluster {

};

struct Nebula {

};


#endif
