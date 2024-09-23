#include<stdio.h>
#include<conio.h>
#define INFINITO 9999
#define MAX 10

void dijkstra(int G[MAX][MAX],int n,int nodoComienzo);

int main()
{
    int G[MAX][MAX],i,j,n,u;
    printf("Ingrese cantidad de vertices: ");
    scanf("%d",&n);
    printf("\nIngrese matriz de adyacencia:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) {
           printf("\ncosto desde %d hasta %d\t" , i,j);
              scanf("%d",&G[i][j]);
    }
    printf("\nIngrese el nodo origen:");
    scanf("%d",&u);
    dijkstra(G,n,u);
    return 0;
}

void dijkstra(int G[MAX][MAX],int n,int nodoComienzo)
{
    
    int costo[MAX][MAX],distancia[MAX],pred[MAX];
    int visitados[MAX],cuenta,distanciaMinima,proximoNodo,i,j;
    //el arreglo pred almacena los predecesores de cada nodo
    //cuenta da la cantidad de nodos vistos hasta ahora
    
    
    //crear matriz de adyacencia
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(G[i][j]==0)
        costo[i][j]=INFINITO;
        else
            costo[i][j]=G[i][j];
            
            //desde aca.
            
            //inicializa pred, distancia y visitados
            for(i=0;i<n;i++)
            {
                distancia[i]=costo[nodoComienzo][i];
                pred[i]=nodoComienzo;
                visitados[i]=0;
            }
            distancia[nodoComienzo]=0;
            visitados[nodoComienzo]=1;
            cuenta=1;
            while(cuenta<n-1)
            {
                distanciaMinima=INFINITO;

                //proximoNodo da el nodo a la minima distancia
                
                for(i=0;i<n;i++)
                    if( distancia[i]<distanciaMinima && !visitados[i])      //si hay una distancia mas corta y el nodo i aun no fue analizado
                      {
                      distanciaMinima=distancia[i];
                      proximoNodo=i;
                    }

                    //verificar si existe un camino mejor a través de proximoNodo
                    visitados[proximoNodo]=1;       //marco con uno que este proximoNodo fue visitado
                    for(i=0;i<n;i++)                //recorrer todos los nodos, variando i
                        if(!visitados[i])           //solo verifico los no visitados anteriormente
                        if(distanciaMinima+costo[proximoNodo][i]<distancia[i])
                        {
                            distancia[i]=distanciaMinima+costo[proximoNodo][i];  //actualizo distancia si encontre una minima
                          pred[i]=proximoNodo;                                 //y tambien el nodo por el que debo pasar
                        }
                        cuenta++;
            } //hasta aca
            
            //imprime el camino y distancia de cada nodo
            for(i=0;i<n;i++)
                  if(i!=nodoComienzo) 
            {
                printf("\nDistancia de nodo%d=%d",i,distancia[i]);
                printf("\nCamino=%d",i);
                j=i;
                do
                {
                    j=pred[j]; //me corro uno hacia tras
                    printf(" <- %d",j);
                }while(j!=nodoComienzo);
            }
}
